cmake_minimum_required(VERSION 3.16)
project(CLearn C)

set(CMAKE_C_STANDARD 99)
add_executable(CLearn main.c myfun.c)

# 引入子目录
add_subdirectory(chapter01_variable)
add_subdirectory(chapter02_constant)
add_subdirectory(chapter03_operator)
add_subdirectory(chapter04_processControl)
add_subdirectory(chapter05_enumerate)
add_subdirectory(chapter06_function)
add_subdirectory(chapter07_scope)
add_subdirectory(chapter08_commonFunctions)
add_subdirectory(chapter09_preprocessingCommandsAndmacroDefinitions)
add_subdirectory(CSource)
add_subdirectory(chapter10_array)
add_subdirectory(chapter11_sortAndSearch)
add_subdirectory(chapter12_debug)
add_subdirectory(chapter13_pointer)
add_subdirectory(chapter14_struct)
add_subdirectory(chapter15_union)

# 从myfun.c源文件创建一个静态库
add_library(myfun STATIC myfun.c)

#find_library(TEST_LIBRARY myfun lib)
#确保放置target_link_libraries在add_executable命令之后，以便 CMake 在链接库之前实际构建目标。
#target_link_libraries(CLearn LINK_PUBLIC ${TEST_LIBRARY})