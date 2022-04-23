#include <stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG //如果定义过 DEBUG
        printf("ok, 调试信息");
    #endif
    #ifndef DEBUG //如果没有定义过 DEBUG
        printf("hello, 另外的信息");
    #endif
}