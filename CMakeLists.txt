cmake_minimum_required(VERSION 3.16)
project(demo_proj_1)
set(CMAKE_CXX_STANDARD 20)
find_package(Magnum REQUIRED GL Sdl2Application)
set(SOURCE_FILES src/main/main.cpp)
add_executable(app ${SOURCE_FILES})

target_link_libraries(app PRIVATE
        Magnum::Application
        Magnum::GL
        Magnum::Magnum)
