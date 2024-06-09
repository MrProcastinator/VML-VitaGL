enable_language(ASM)

project(VMLVitaGL)

set(LIBRARY_NAME ${VITAGL_LIBRARY_NAME})

if("${CMAKE_BUILD_TYPE}" STREQUAL "DEBUG")
  set(MONO_RELEASE_TYPE debug)
else()
  set(MONO_RELEASE_TYPE optimize)
endif()

compile_mono_assembly_aot(
  ASSEMBLY ${LIBRARY_NAME}
  SOURCES VitaGL.cs
  FLAGS unsafe ${MONO_RELEASE_TYPE}
)

add_library(${PROJECT_NAME} STATIC
  main.c
  ${LIBRARY_NAME}.dll.s
)

install(
  FILES ${CMAKE_BINARY_DIR}/${LIBRARY_NAME}.dll
  DESTINATION ${MONO_LIB_DLL_PATH}
)

install(
  FILES VitaGL.h
  DESTINATION ${MONO_INCLUDE_VML_PATH}
)