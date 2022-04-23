//
// Created by capensis on 2022/4/17.
//
#include <stdio.h>

// 不加分号
#define PI 3.14

int main(){
    //PI = 3.1415  可以吗? => 不可以
    double area;
    double r = 1.2;
    area = PI * r * r;
    printf("面积 : %.2f", area);
    return 0;
}
