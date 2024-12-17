cmake_minimum_required(VERSION 3.10)

project(ProtoEngine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.4
)
FetchContent_MakeAvailable(glfw)

add_executable(ProtoEngine src/main.cpp)

target_include_directories(ProtoEngine PRIVATE include)

target_link_libraries(ProtoEngine PRIVATE glfw)