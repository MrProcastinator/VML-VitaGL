enable_language(ASM)

project(VMLVGLDrawElements)

set(LIBRARY_NAME VitaGL.Samples.DrawElements)

compile_mono_assembly_aot(
  ASSEMBLY ${LIBRARY_NAME}
  SOURCES DrawElements.cs ../shared/DebugLog.cs
  REFERENCES ${VITAGL_LIBRARY_NAME}.dll VitaSdk.Core.dll
  DEFINES ${DEFINE_LOG_ERRORS}
  FLAGS unsafe
)

add_executable(${PROJECT_NAME}
  main.c
  ${LIBRARY_NAME}.dll.s
)

add_dependencies(${PROJECT_NAME} SamplesDependencies)

target_link_libraries(${PROJECT_NAME} VitaMonoLoader VMLCoreAssemblies)
target_link_libraries(${PROJECT_NAME} VMLVitaSdk VMLVitaGL ${VITA_GL_LIB})
target_link_libraries(${PROJECT_NAME} m z)
target_link_libraries(${PROJECT_NAME} mathneon)

target_link_libraries(${PROJECT_NAME} mono-vita_stub PTHREAD_PRX_stub SUPRXManager_stub_weak)
target_link_libraries(${PROJECT_NAME} SceLibDbg_stub SceLibKernel_stub SceAppMgr_stub SceAppUtil_stub SceCommonDialog_stub SceGxm_stub SceDisplay_stub SceSysmodule_stub)

target_link_libraries(${PROJECT_NAME} ${MONO_VITA_STUBS} ${PTHREAD_STUBS} ${SUPRXMANAGER_STUBS})
target_link_libraries(${PROJECT_NAME} ScePgf_stub SceSysmem_stub SceIofilemgr_stub SceRtc_stub SceAppUtil_stub SceNet_stub SceKernelThreadMgr_stub ${SCELIBC_LIBRARY} SceFios2_stub SceLibKernel_stub SceCtrl_stub)
target_link_libraries(${PROJECT_NAME} ${VITA_VITASHARK_LIB} SceShaccCgExt)
target_link_libraries(${PROJECT_NAME} taihen_stub SceShaccCg_stub SceKernelDmacMgr_stub)

set(VITA_APP_NAME "VML VitaGL DrawElements")
set(VITA_TITLEID  "VMLVGLDRE")
set(VITA_VPKNAME  "VMLVGLDrawElements")
set(VITA_VERSION  "01.00")
set(VITA_MKSFOEX_FLAGS "-d ATTRIBUTE2=12")

# Hack to avoid duplicate title id
set(VITA_MKSFOEX_FLAGS "")
set(VITA_PACK_VPK_FLAGS "")

vita_create_self(draw_elements-eboot.bin ${PROJECT_NAME} UNSAFE STRIPPED)
vita_create_vpk(${VITA_VPKNAME}.vpk ${VITA_TITLEID} draw_elements-eboot.bin
VERSION ${VITA_VERSION}
NAME ${VITA_APP_NAME}
  FILE 
    # VPK files
    ${CMAKE_SOURCE_DIR}/vpk/sce_sys/icon0.png sce_sys/icon0.png
    ${CMAKE_SOURCE_DIR}/vpk/sce_sys/Sample3/pic0.png sce_sys/pic0.png
    ${CMAKE_SOURCE_DIR}/vpk/sce_sys/startup.png sce_sys/livearea/contents/startup.png
    ${CMAKE_SOURCE_DIR}/vpk/sce_sys/Sample3/bg.png sce_sys/livearea/contents/bg.png
    ${CMAKE_SOURCE_DIR}/vpk/sce_sys/template.xml sce_sys/livearea/contents/template.xml
)

add_custom_target(VMLVGLDrawElements_send_v3k
  COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/${LIBRARY_NAME}.dll
    ${VITA3K_PATH}/ux0/data/VML/${LIBRARY_NAME}.dll
  COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/${VITAGL_LIBRARY_NAME}.dll
    ${VITA3K_PATH}/ux0/data/VML/${VITAGL_LIBRARY_NAME}.dll
  COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/VitaSdk.Core.dll
    ${VITA3K_PATH}/ux0/data/VML/VitaSdk.Core.dll
  COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_BINARY_DIR}/draw_elements-eboot.bin
    ${VITA3K_PATH}/ux0/app/${VITA_TITLEID}/eboot.bin
  DEPENDS ${VITA_VPKNAME}.vpk-vpk ${CMAKE_BINARY_DIR}/${LIBRARY_NAME}.dll ${CMAKE_BINARY_DIR}/VitaSdk.Core.dll
)