cmake_minimum_required(VERSION 3.8)
project(TP_project)

set(CMAKE_CXX_STANDARD 11)

link_directories(./lib)

set(SOURCE_FILES main.cpp concrete_factories.cpp
        forsen_units.cpp cancer_units.cpp
        Actor.cpp Game.cpp Client.cpp Selection.cpp)
add_executable(TP_project ${SOURCE_FILES})

target_link_libraries(TP_project -static)
target_link_libraries(TP_project tcod tcod-gui)

configure_file(dll/libtcod.dll . COPYONLY)
configure_file(dll/libtcod-gui.dll . COPYONLY)
configure_file(dll/SDL2.dll . COPYONLY)
configure_file(res/terminal.png . COPYONLY)
