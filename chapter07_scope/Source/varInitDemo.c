#include <stdio.h>

int a; //ȫ��
float f;
double d1;

void f20() { //����, ����������Ǿֲ�����
    int num = 90;
    if (1) {
        int num = 900;
    }
    printf("a=%d", a);
}

void f30() {
    int num = 80;
}

int main() {
    //�ֲ�������ϵͳ�������Ĭ�ϳ�ʼ����
    //����Ծֲ�������ʼ�������ʹ�ã����򣬳������к���ܻ��쳣�˳�
    //int i; //
    //printf("%d", i);
    printf("\na=%d f=%.2f d1=%.2f", a, f, d1); // a = 0 f=0.00 d1=0.00

}