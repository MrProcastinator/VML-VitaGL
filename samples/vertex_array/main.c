#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <vitasdk.h>

#include <VML/VML.h>
#include <VML/VitaSdk.h>
#include "../../src/VitaGL.h"

unsigned int sceLibcHeapSize = 128 * 1024 * 1024;
// unsigned int _newlib_heap_size_user  = 128 * 1024 * 1024;

#define VML_USE_OPT_PARAM
#define ASSEMBLIES_DLL_FILE			"ux0:/data/VML/VitaGL.Samples.VertexArray.dll"

#define LIBFIOS2_PATH				"ur0:/data/VML/libfios2.suprx"
#define LIBC_PATH					"ur0:/data/VML/libc.suprx"
#define SUPRX_MANAGER_PATH			"ur0:/data/VML/SUPRXManager.suprx"
#define MONO_VITA_PATH				"ur0:/data/VML/mono-vita.suprx"
#define PTHREAD_PATH				"ur0:/data/VML/pthread.suprx"

extern void** mono_aot_module_VitaGL_Samples_VertexArray_info;

FILE* mono_log;

int tryLoadModule(const char* module)
{
	int ret = sceKernelLoadStartModule(module, 0, NULL, 0, NULL, 0);;	

	if (ret < 0) {
		fprintf(mono_log, "[VMLVGLVertexArray] sceKernelLoadStartModule() failed for %s with code: %8x\n", module, ret);
	} else {
		fprintf(mono_log, "[VMLVGLVertexArray] sceKernelLoadStartModule() ran successfully for %s!\n", module);
	}

	return ret;
}

int loadModules()
{
	int ret = 0;
	int cont = 1;

	ret = sceSysmoduleLoadModule(SCE_SYSMODULE_NET);	
	if (ret < 0) {
		fprintf(mono_log, "[VMLVGLVertexArray] sceSysmoduleLoadModule(SCE_SYSMODULE_NET) failed with code: %8x\n", ret);
	} else {
		fprintf(mono_log, "[VMLVGLVertexArray] sceSysmoduleLoadModule(SCE_SYSMODULE_NET) ran successfully!\n");
	}
	cont &= (ret > 0);

#ifdef USE_CUSTOM_LIBC
	ret = tryLoadModule(LIBFIOS2_PATH);
	cont &= (ret > 0);

	ret = tryLoadModule(LIBC_PATH);
	cont &= (ret > 0);
#endif
	
	ret = tryLoadModule(SUPRX_MANAGER_PATH);
	cont &= (ret > 0);
	
	ret = tryLoadModule(PTHREAD_PATH);
	cont &= (ret > 0);

	ret = tryLoadModule(MONO_VITA_PATH);
	cont &= (ret > 0);

	return cont;
}

extern void vMLSceCtrlRegister();

void rootEntry()
{
	int ret = 0;

	fprintf(mono_log, "[VMLVGLVertexArray] Loading SceCtrl\n");
	VMLSceCtrlRegister();
	fprintf(mono_log, "[VMLVGLVertexArray] Finished loading SceCtrl\n");

	fprintf(mono_log, "[VMLVGLVertexArray] Loading VitaGL\n");
	VMLVitaGLRegister();
	fprintf(mono_log, "[VMLVGLVertexArray] Finished loading VitaGL\n");

	ret = VMLRunMain(ASSEMBLIES_DLL_FILE, mono_aot_module_VitaGL_Samples_VertexArray_info);
	fprintf(mono_log, "[VMLVGLVertexArray] Program::Main() returned %d\n", ret);
}

int main(int argc, char* argv[])
{
	int ret = 0;

	if(!(mono_log = fopen("ux0:data/VMLVGLVertexArray.log", "w+")))
	{
		return 1;
	}

	ret = loadModules();
	if (ret < 0)
		return 0;

	fprintf(mono_log, "[VMLVGLVertexArray] Setting mono paths\n");
	VMLSetPaths("ux0:data/VML", "ux0:data/VML/mono/2.0/machine.config");
	fprintf(mono_log, "[VMLVGLVertexArray] Initializing VML\n");

	/* Force flushing before continuing */
	fclose(mono_log);

	if(!(mono_log = fopen("ux0:data/VMLVGLVertexArray.log", "a+")))
	{
		return 1;
	}
#ifdef VML_USE_OPT_PARAM
	VMLInitOptParam optParam;
	optParam.stackSize = SCE_KERNEL_1MiB;
	optParam.cpuAffinity = SCE_KERNEL_CPU_MASK_USER_0;
	optParam.priority = SCE_KERNEL_INDIVIDUAL_QUEUE_HIGHEST_PRIORITY;
	optParam.programName = "VMLVGLVertexArray";
	optParam.monoVerboseDebug = true;

	ret = VMLInitialize(rootEntry, &optParam);
#else
	ret = VMLInitialize(rootEntry, NULL);
#endif

	fprintf(mono_log, "[VMLVGLVertexArray] VMLInitialize(): 0x%08X", ret);

	fclose(mono_log);

	return 0;
}