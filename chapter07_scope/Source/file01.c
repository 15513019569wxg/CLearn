#include <stdio.h>

//��һ���ļ��У�ʹ������һ���ļ���ȫ�ֱ���, ʹ��extern ���뼴��
extern int num;
//extern int num2;
int num2 = 60;

int main() {
    printf("\nnum=%d num2=%d", num, num2);
}