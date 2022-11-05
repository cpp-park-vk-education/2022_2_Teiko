cmake_minimum_required(VERSION 3.16)
project(tests)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize=leak")

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(run_tests
        test.cpp)
target_link_libraries(run_tests hello)

target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)
add_test(NAME Tests
        COMMAND run_tests)
