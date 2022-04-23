#include <stdio.h>

int main() {
    //a[4][6] : 表示一个4行6列的二维数组
    int a[4][6]; // 没有初始化，则是分配的内存垃圾值
    int i, j;
    //全部初始化 0
    for (i = 0; i < 4; i++) { //先遍历行
        for (j = 0; j < 6; j++) {//遍历列
            a[i][j] = 0;
        }
    }
    a[1][2] = 1;
    a[2][1] = 2;
    a[2][3] = 3;
    //输出二维数组
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    ////看看二维数组的内存布局
    printf("\n二维数组a的首地址=%p", a);
    printf("\n二维数组a[0]的地址=%p", a[0]);
    printf("\n二维数组a[0][0]的地址=%p", &a[0][0]);
    printf("\n二维数组a[0][1]的地址=%p", &a[0][1]);
    //将二维数组的各个元素得地址输出
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("a[%d]的地址=%p  ", i, a[i]);
        for (j = 0; j < 6; j++) {
            printf("a[%d][%d]的地址=%p  ", i, j, &a[i][j]);
        }
        printf("\n");
    }
}