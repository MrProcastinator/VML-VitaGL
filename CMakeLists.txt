cmake_minimum_required(VERSION 3.2)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(VMLBuild)
include(NuGet)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
  else()
    message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
  endif()
endif()

project(VML_VitaGL)

include("${VITASDK}/share/vita.cmake" REQUIRED)

# Vita library names (for Vita3K)
set(VITA_GL_LIB vitaGL CACHE STRING "Name of OpenGL static library")
set(VITA_VITASHARK_LIB vitashark CACHE STRING "Name of vitashark static library")

set(VITAGL_LIBRARY_NAME "VitaSdk.Libs.VitaGL" CACHE STRING "VitaGL C# library name")
set(USE_CUSTOM_LIBC ON CACHE BOOL "Use sce_module libraries from Unity Support for Vita")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -marm -mtune=cortex-a9 -mfpu=neon -Wno-incompatible-pointer-types -Wno-stringop-overflow -Wl,-q -O3 -Wall")

set(USE_DEBUG_LOG ON CACHE BOOL "Input debug information in samples (may be slow)")

add_custom_target(SamplesDependencies)
add_custom_target(SamplesGlmDependencies)

compile_mono_external_import(
    ASSEMBLY VitaSdk.Core.dll
    TARGET SamplesDependencies
)

nuget_install_package(
    PACKAGE GlmSharp
    VERSION 0.9.8
    TARGET SamplesGlmDependencies
)

if (USE_CUSTOM_LIBC)
  set(SCELIBC_LIBRARY SceLibcMonoBridge_stub)
  add_compile_definitions(USE_CUSTOM_LIBC)
else()
  set(SCELIBC_LIBRARY SceLibc_stub)
endif()

if (USE_DEBUG_LOG)
  set(DEFINE_LOG_ERRORS LOG_ERRORS)
else()
  set(DEFINE_LOG_ERRORS "")
endif()

add_subdirectory(src)
add_subdirectory(samples/draw_elements)
add_subdirectory(samples/immediate_mode)
add_subdirectory(samples/triangles)
add_subdirectory(samples/vertex_array)
