#include <stdio.h>
#include <stdlib.h>

//��дһ������������һ��һά����
int *f1() {
    static int arr[10]; //�������static ,��arr �Ŀռ��ھ�̬����������
    int i;
    for (i = 0; i < 10; i++) {
        arr[i] = rand();
    }
    return arr;
}

int main() {
    int *p;
    int i;
    p = f1(); //p ָ������ f1 ���ɵ�������׵�ַ(����һ��Ԫ�صĵ�ַ)
    for (i = 0; i < 10; i++) {
        printf("%d\n", *(p + i));
    }
}