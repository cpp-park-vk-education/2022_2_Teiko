cmake_minimum_required(VERSION 3.23)
project(2022_2_Teiko)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS --coverage)


add_executable(2022_2_Teiko modules/main.cpp modules/main.h tests/test.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()