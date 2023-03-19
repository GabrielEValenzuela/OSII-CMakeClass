# Operating Systems II - UNC FCEFyN 2023


# First, we need to specify the CMake version
cmake_minimum_required(VERSION 3.22)

# Then, we setup our project
project(
    App
    VERSION 1.0.0
    DESCRIPTION "A very nice CMake tutorial"
    LANGUAGES C
)

# Set the C version
set(CMAKE_C_STANDARD 11)

# We create our library
add_library(Calculator STATIC "lib/calculator/src/calculator.c")

# We create our executable
add_executable(App src/main.c src/foo.c)

# The we add the headers of our project
target_include_directories(App PRIVATE "include/")
target_include_directories(App PRIVATE "lib/calculator/include/")
target_include_directories(Calculator PRIVATE "lib/calculator/include/")

# We link our library
target_link_libraries(App Calculator)
