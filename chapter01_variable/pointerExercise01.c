#include <stdio.h>

int main() {

//дһ�����򣬻�ȡһ��int����num�ĵ�ַ������ʾ���ն�
//��num�ĵ�ַ����ָ�� numPtr , ��ͨ��ptrȥ�޸�num��ֵ.
//���� numPtr ������ �� int *  , ע��ָ������ͺ� ��ָ��ָ��ı��������Ƕ�Ӧ��ϵ
//�������������ڴ沼��ͼ

    int num = 88;
    int* numPtr = &num;
    //�����numû���޸ĵ����
    printf("num��ֵ=%d num�ĵ�ַ=%p", num, &num); // num= 88
    *numPtr = 99; //ͨ��ptrȥ�޸�num��ֵ, num ������ֵҲ����Ӧ�ı��޸�
    printf("\nnum��ֵ=%d num�ĵ�ַ=%p", num, &num);// num = 99

    int a = 300; // a = 300
    int b = 400; // b = 400
    int *ptr = &a; //ok numPtr ָ�� a
    *ptr = 100; // a = 100
    ptr = &b; //  ok numPtr ָ�� b
    *ptr = 200; // b = 200
    printf("\na=%d,b=%d,*numPtr=%d", a, b, *numPtr); //a = 100, b = 200, *numPtr = 200


}