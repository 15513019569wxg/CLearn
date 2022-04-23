#include <stdio.h>
int _SQ(int y){ //函数, 求y的平方
  return ((y)*(y));
}
#define SQ(y) ((y)*(y))

int main() {
    int i=1;
    while(i<=5){
        printf("%d^2 = %d\n", i-1, _SQ(i++)); // 第一次
    }

    // 使用宏定义
    int j = 1;
    while (j <= 5) {  //进入循环 3 次，得到的是 1 * 1 = 1  3 * 3 = 9 5 * 5 = 25
        //分析
        //  SQ(i++) 宏调用 展开   ((j++)*(j++))
        printf("%d^2 = %d\n", j - 2, SQ(j++));
    }
}
