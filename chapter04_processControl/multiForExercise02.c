#include <stdio.h>

int main() {
    //99乘法表
    //分析
    //1. 先打印1列
    //2. 在打印多列，注意分析,
    //3. 先死后活， 功能逐步完成
    int i, j;
    for (i = 1; i <= 9; i++) {
        //因为每一行都在增加算式, 所以使用for循环控制
        for (j = 1; j <= i; j++) {
            printf("%d * %d = %d  ", j, i, i * j);
        }
        printf("\n");
    }

}