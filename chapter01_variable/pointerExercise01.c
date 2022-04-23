#include <stdio.h>

int main() {

//写一个程序，获取一个int变量num的地址，并显示到终端
//将num的地址赋给指针 numPtr , 并通过ptr去修改num的值.
//分析 numPtr 的类型 是 int *  , 注意指针的类型和 该指针指向的变量类型是对应关系
//并画出案例的内存布局图

    int num = 88;
    int* numPtr = &num;
    //先输出num没有修改的情况
    printf("num的值=%d num的地址=%p", num, &num); // num= 88
    *numPtr = 99; //通过ptr去修改num的值, num 变量的值也就相应的被修改
    printf("\nnum的值=%d num的地址=%p", num, &num);// num = 99

    int a = 300; // a = 300
    int b = 400; // b = 400
    int *ptr = &a; //ok numPtr 指向 a
    *ptr = 100; // a = 100
    ptr = &b; //  ok numPtr 指向 b
    *ptr = 200; // b = 200
    printf("\na=%d,b=%d,*numPtr=%d", a, b, *numPtr); //a = 100, b = 200, *numPtr = 200


}