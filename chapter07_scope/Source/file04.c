#include <stdio.h>

extern void fun1(void);

//extern  void fun2(void);
void fun2() {
    //...
}

int main() {
    fun1();
    //fun2();
}