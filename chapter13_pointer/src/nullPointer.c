#include <stdio.h>

int main() {

    int *p = NULL; // p ��ָ��
    int num = 34;
    p = &num;

    printf("*p=%d", *p); // 34

}