//
// Created by capensis on 2022/4/17.
//
#include <stdio.h>

// ���ӷֺ�
#define PI 3.14

int main(){
    //PI = 3.1415  ������? => ������
    double area;
    double r = 1.2;
    area = PI * r * r;
    printf("��� : %.2f", area);
    return 0;
}
