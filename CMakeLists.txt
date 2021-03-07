cmake_minimum_required(VERSION 3.2)

# set the project name
project(test_proj)

# If we can find the yaml-cpp, then we do not need the external project
find_package (yaml-cpp QUIET)

if (NOT ${yaml-cpp_FOUND})
    message("*** YAML-CPP NOT FOUND, ADDING IT AS AN EXTERNAL PROJECT")
    include(ExternalYamlCpp.cmake)
endif()

# Common step regardless of if yaml-cpp is pre-installed or added as external proj
include_directories(${YAML_CPP_INCLUDE_DIR})

# add the executable
add_executable(sample_program src/sample_program.cpp)

# Important to add dep otherwise build does not always succeed the first time.
if (NOT ${yaml-cpp_FOUND})
    add_dependencies(sample_program YAML_CPP_EXTERNAL_PROJECT)
endif()

target_link_libraries(sample_program ${YAML_CPP_LIBRARIES})
