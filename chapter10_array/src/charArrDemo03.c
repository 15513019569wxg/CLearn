#include <stdio.h>

int main() {
    //ʹ��һ��ָ�� pStr, ָ��һ���ַ�����
    char *pStr = "hello tom";

    //char str[14]; //str ʵ����һ������
    //str=" hello tom";  //����
    //str[0] = 'i'; //ok
    char *a = "yes";
    printf("\na�����ַ=%p a ָ���ַ=%p", &a, a);
    a = "hello tom"; //ok
    printf("\na�����ַ=%p a ָ���ַ=%p", &a, a);
    printf("\na=%s ", a); // "hello tom"

    printf("\n pStr ָ����ַ���=%s ", pStr); //pStr ָ����ַ���=hello tom
    printf("\n pStr ָ����׸��ַ���ַ=%p ", pStr); //pStr ָ����׸��ַ���ַ=00007ff672b0b000
    printf("\n pStr ָ��ĵ�ַ=%p ", pStr); // pStr ָ����׸��ַ���ַ=00007ff672b0b000
    printf("\n pStr ָ����׸��ַ�=%c ", pStr);    // pStr ָ����׸��ַ�=
    printf("\n pStr ָ����׸��ַ�=%c ", pStr+50);    //  pStr ָ����׸��ַ�=2

    printf("\n=======================================");

    //pStr ָ����׸��ַ�=h
    printf("\n pStr ָ����׸��ַ�=%c ", *pStr);
    //pStr ָ����׸��ַ�=0000000000000068
    printf("\n pStr ָ����׸��ַ�=%p ", *pStr);
    // pStr ָ����׸��ַ�=, Ȼ��ֱ����ֹ����
    //printf("\n pStr ָ����׸��ַ�=%s ", *pStr);

    printf("\n=======================================");

    printf("\n pStr ָ��ĵ������ַ�=%c ", *(pStr+2));
    printf("\n pStr ָ��ĵ������ַ�=%p ", *(pStr+3));
    printf("\n pStr ָ��ĵڶ����ַ�=%c ", *(pStr+1));
    printf("\n pStr ָ��ĵڶ����ַ�=%p ", *(pStr+1));
    // ��ֹ����
    printf("\n pStr ָ��ĵڶ����ַ�=%s ", *(pStr+1));



}