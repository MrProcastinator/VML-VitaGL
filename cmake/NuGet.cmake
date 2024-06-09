# Define the output directory
set(NUGET_OUTPUT_DIR "${CMAKE_BINARY_DIR}/nuget_packages")
file(MAKE_DIRECTORY "${NUGET_OUTPUT_DIR}")

# Make clean remove the nuget package folder
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES ${NUGET_OUTPUT_DIR})

function(nuget_install_package)
    cmake_parse_arguments(NUGET "" "PACKAGE;VERSION;TARGET" "" ${ARGN})

    if(NOT NUGET_PACKAGE)
        message(FATAL_ERROR "PACKAGE argument is required")
    endif()

    if(NOT NUGET_VERSION)
        message(FATAL_ERROR "VERSION argument is required")
    endif()

    if(NOT NUGET_TARGET)
        message(FATAL_ERROR "TARGET argument is required")
    endif()

    # Ensure NuGet executable is available
    find_program(NUGET_EXE nuget)
    if(NOT NUGET_EXE)
        message(FATAL_ERROR "NuGet executable not found")
    endif()

    set(PACKAGE_DIR "${NUGET_OUTPUT_DIR}/${NUGET_PACKAGE}.${NUGET_VERSION}/lib/Net20")

    #set(NUGET_PROCESS_TARGET nuget_${NUGET_PACKAGE}_${NUGET_VERSION})

    # Download the NuGet package
    add_custom_command(
        TARGET ${NUGET_TARGET}
        COMMAND ${NUGET_EXE} install ${NUGET_PACKAGE} -Version ${NUGET_VERSION} -OutputDirectory ${NUGET_OUTPUT_DIR} -Framework net20
        COMMAND ${CMAKE_COMMAND} -E copy_directory "${PACKAGE_DIR}" "${CMAKE_BINARY_DIR}"
        COMMENT "Importing ${NUGET_PACKAGE} ${NUGET_VERSION}"
    )
endfunction()
