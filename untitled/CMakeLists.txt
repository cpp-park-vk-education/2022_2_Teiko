cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTODOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/iwaly/Qt/5.15.2/gcc_64/lib/cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled main.cpp interface.h interface.ui)
target_link_libraries(untitled
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

