# Operating Systems II - UNC FCEFyN 2023

# Create our test executable
add_executable(AppTests
    calculator_tests.c
)

# Link with our source to test and Unity framework
target_link_libraries(AppTests
    Calculator
    Unity
)

# Add test to run with ctest
add_test(AppUTs AppTests)
