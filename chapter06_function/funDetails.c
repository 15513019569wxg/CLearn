#include <stdio.h>


void f1() {
    int num = 10;
    printf("num=%d\n", num);
}

//基本数据类型默认是值传递的，即进行值拷贝。在函数内修改，不会影响到原来的值
void f2(int n) {
    n++;
    printf("\nf2中的n=%d", n); // n=10
}

//c语言不支持函数重载，即不能通过参数的个数不同，或者类型不同来区别函数
//void f2(int n, int n2) {}

//如果希望函数内的变量能修改函数外的变量，可以传入变量的地址&，函数内以指针的方式操作变量。从效果上看类似引用(即传递指针)
void f3(int* p) {
    printf("\np变量存放的值：%p", p);  //0000005b34dffd0c
    printf("\np变量的内存地址： %p ", &p);  //0000005b34dffce0
    (*p)++;// 修改会对函数外的变量有影响
}

int main() {
    //函数中的变量是局部的，函数外不生效
    //printf("num=%d", num);
    int n = 9;
    printf("n的内存地址：%p", &n);   //0000005b34dffd0c
    f2(n);
    printf("\nmain函数中 n=%d", n); //9
    f3(&n);
    printf("\nmain函数中 n=%d", n); //10
}