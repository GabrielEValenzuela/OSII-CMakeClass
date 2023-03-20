# Operating Systems II - UNC FCEFyN 2023

# We need to compile Unity as static library
add_library(Unity STATIC unity/src/unity.c)

# Add all source files
target_include_directories(Unity PUBLIC unity/src)
