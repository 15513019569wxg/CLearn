#include <stdio.h>

int main() {

    /*
        编写一个程序, 可以输入人的年龄, 如果该同志的年龄大于18岁, 则输出 “你年龄大于18, 要对自己的行为负责!”
        分析
        1. int age 接收输入的年龄
        2. 使用if 单分支来判断，进行相应处理
    */

    int age = 0;
    printf("请输入年龄");
    scanf("%d", &age);

    //根据age的值来处理
    if (age > 18) {
        printf("\n你年龄大于18,要对自己的行为负责!");
    }
    printf("ok~~~");

}
