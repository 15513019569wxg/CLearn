include_directories(.)


include_directories(./include)

add_executable(varScope01 Source/varScope01.c)
add_executable(varInitDemo Source/varInitDemo.c)
add_executable(varExercise01 Source/varExercise01.c)
add_executable(varExercise02 Source/varExercise02.c)
add_executable(file01 Source/file01.c)
add_executable(file02 Source/file02.c)
add_executable(file03 Source/file03.c)
add_executable(file04 Source/file04.c)



add_library(staticVar STATIC Source/file02.c)
target_link_libraries(file01 staticVar)

add_library(staticFunc STATIC Source/file03.c)
target_link_libraries(file04 staticFunc)



