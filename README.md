# YAML-CPP as an External Project:
Minimal example of using yaml-cpp with CMake External Project to compile a simple test program.

# Brief Intro:
This minimal example is sufficient for someone trying to use `yaml-cpp` in their project. The `CMakeLists.txt` file first checks to see if `yaml-cpp` is
pre-installed in the system. If it is not, it is added as an external project using the `ExternalProject_Add` which clones the library from its github webpage, 
builds it and then uses it to build the `sample_program.cpp`. This `sample_program.cpp` reads in the `config.yaml` file and displays some of its content.
