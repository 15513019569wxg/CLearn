#include <stdio.h>

int main() {
    /*
    ����̫������ֻèè:һֻ���ֽ�С��,����3��,��ɫ������һֻ��С��,����100��,��ɫ��
    ���дһ�����򣬵��û�����Сè������ʱ������ʾ��è�����֣����䣬��ɫ��
    ����û������Сè����������ʾ ����̫û����ֻèè��
    ������
    1. èè�� ������Ա(����)���
    2. ʹ�ýṹ����
    */
    //���� �ṹ��Cat  �����������͡�

    struct Cat { // �ṹ���� Cat, Cat ���������Լ������һ����������
        char *name;  //���֣�ʹ��ָ�룬ָ��һ���ַ���
        int age; //����
        char *color; //��ɫ
    };
    //ʹ��Cat �ṹ�壬��������
    struct Cat cat1; // cat1 ���� struct Cat ��һ������
    struct Cat cat2; // cat2 ���� struct Cat ��һ������
    //��cat1 �ĸ�����Ա��ֵ
    cat1.name = "С��";
    cat1.age = 3;
    cat1.color = "��ɫ";

    //��cat2 �ĸ�����Ա��ֵ
    cat2.name = "С��";
    cat2.age = 100;
    cat2.color = "��ɫ";

    //�����ֻè����Ϣ
    printf("\n ��1ֻè name=%s age=%d color=%s", cat1.name, cat1.age, cat1.color);
    printf("\n ��2ֻè name=%s age=%d color=%s", cat2.name, cat2.age, cat2.color);

}