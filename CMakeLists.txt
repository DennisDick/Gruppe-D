#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#define the project name
project(developer_project VERSION 1.0 LANGUAGES C)

#define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic)

#add a library for your functions
add_library(developer_lib STATIC
    src/developer.c
    src/developer_group.c
    )

#add the includes to the library
target_include_directories(developer_lib PUBLIC include)

#add an executable and assign files to it
add_executable(developer_project src/main.c)

#add the include directories
target_include_directories(developer_project PUBLIC include)

#link your library
target_link_libraries(developer_project PRIVATE developer_lib)

