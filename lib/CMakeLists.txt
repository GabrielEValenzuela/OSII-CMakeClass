# Operating Systems II - UNC FCEFyN 2023

# We create our library
add_library(Calculator STATIC "calculator/src/calculator.c")

# Include the headers
target_include_directories(Calculator PUBLIC "calculator/include/")