# OS II - CMakeClass
FCEFyN - Universidad Nacional de Córdoba

## Useful commands to explore this repository

To run `CMake` we need to execute

```bash
mkdir build && cd build
cmake ..
make
```

The following is a resume of the branches of this repository:
- structure_and_executable : This is the point of start. Here we create a simple executable with CMake
- static_library : To our previous executable, we add a static library
- unit_tests : We integrate Unity as test framework. Modify our project structure.


## Useful commands for tools
To add clang-tidy, we need to add to our `CMakeLists.txt`

```text
set(CMAKE_C_CLANG_TIDY "clang-tidy;check=*-")
```
To run scan-build
```bash
mkdir build_with_sb && cd build_with_sb
scan-build cmake ..
scan-build make
```

To run valgrind

```bash
mkdir build && cd build
cmake ..
make
valgrind --leak-check=full ./Executable
```

To run gcovr

```text
set(CMAKE_C_FLAGS_PROFILE --coverage)
```

```bash
mkdir build_coverage && cd build_coverage
cmake -DCMAKE_BUILD_TYPE=PROFILE ..
make
gcovr -r $PATH_TO_SRC . --html-details coverage.html
```
