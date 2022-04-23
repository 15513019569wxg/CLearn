#include <stdio.h>

int main() {

    //打印1~100之间所有是9的倍数的整数的个数及总和. [使用for完成]
    //分析
    //1. 定义变量 count 记录 个数
    //2. 定义变量 sum 记录 总和

    int i;
    int count = 0;
    int sum = 0;
    for (i = 1; i <= 100; i++) {
        //判断 i 是不是 9的倍数
        if (i % 9 == 0) { //是
            count++; //统计个数
            sum += i; //累计到sum
        }
    }

    printf("\n count=%d sum=%d", count, sum);


    //完成下面的表达式输出
    //分析
    //1. 先接收用户的输入 num
    //2. 使用for 循环来输出 0 --》 num  的各种组合方式
    //3. 使用先死后活 方式来编程和思考 ， 假定 num 就是 6 =》 然后再在把 6 改成变量
    //4. 当我们的编程思维建立后，就可以一步到位
    int num = 10; // 使用scanf 让用户输入 num,
    int j;
    for (j = 0; j <= num; j++) {
        printf("\n %d + %d = %d", j, num - j, num);
    }

}