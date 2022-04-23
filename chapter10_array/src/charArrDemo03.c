#include <stdio.h>

int main() {
    //使用一个指针 pStr, 指向一个字符数组
    char *pStr = "hello tom";

    //char str[14]; //str 实际是一个常量
    //str=" hello tom";  //错误
    //str[0] = 'i'; //ok
    char *a = "yes";
    printf("\na本身地址=%p a 指向地址=%p", &a, a);
    a = "hello tom"; //ok
    printf("\na本身地址=%p a 指向地址=%p", &a, a);
    printf("\na=%s ", a); // "hello tom"

    printf("\n pStr 指向的字符串=%s ", pStr); //pStr 指向的字符串=hello tom
    printf("\n pStr 指向的首个字符地址=%p ", pStr); //pStr 指向的首个字符地址=00007ff672b0b000
    printf("\n pStr 指向的地址=%p ", pStr); // pStr 指向的首个字符地址=00007ff672b0b000
    printf("\n pStr 指向的首个字符=%c ", pStr);    // pStr 指向的首个字符=
    printf("\n pStr 指向的首个字符=%c ", pStr+50);    //  pStr 指向的首个字符=2

    printf("\n=======================================");

    //pStr 指向的首个字符=h
    printf("\n pStr 指向的首个字符=%c ", *pStr);
    //pStr 指向的首个字符=0000000000000068
    printf("\n pStr 指向的首个字符=%p ", *pStr);
    // pStr 指向的首个字符=, 然后直接终止程序
    //printf("\n pStr 指向的首个字符=%s ", *pStr);

    printf("\n=======================================");

    printf("\n pStr 指向的第三个字符=%c ", *(pStr+2));
    printf("\n pStr 指向的第三个字符=%p ", *(pStr+3));
    printf("\n pStr 指向的第二个字符=%c ", *(pStr+1));
    printf("\n pStr 指向的第二个字符=%p ", *(pStr+1));
    // 终止程序
    printf("\n pStr 指向的第二个字符=%s ", *(pStr+1));



}