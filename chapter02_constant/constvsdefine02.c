#include <stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG //�������� DEBUG
        printf("ok, ������Ϣ");
    #endif
    #ifndef DEBUG //���û�ж���� DEBUG
        printf("hello, �������Ϣ");
    #endif
}