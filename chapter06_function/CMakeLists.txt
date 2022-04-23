include_directories(.)

add_executable(funcDemo01 funcDemo01.c)
add_executable(funcTheory funcTheory.c)

add_executable(myHello myHello.c)
target_link_libraries(myHello myfun)



add_executable(funcExercise01 funcExercise01.c)
add_executable(quoteStarFunction quoteStarFunction.c)
add_executable(recursionDemo01 recursionDemo01.c)
add_executable(recursionExercise recursionExercise.c)
add_executable(funDetails funDetails.c)

# 添加静态库
add_library(star STATIC funcExercise01.c)
target_link_libraries(quoteStarFunction star)



add_executable(funDetailExercise funDetailExercise.c)


