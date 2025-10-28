cmake_minimum_required(VERSION 3.16)
project(MultithreadLab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable warnings
if (MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

# Add executable
add_executable(MultithreadLab
    src/main.cpp
    src/tasks.cpp
    src/thread_manager.cpp
)

# Include headers
target_include_directories(MultithreadLab PRIVATE include)
