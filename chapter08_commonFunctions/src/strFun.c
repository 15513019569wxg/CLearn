#include <stdio.h>
#include <string.h> // ͷ�ļ��������ַ�����ص�ϵͳ����

int main() {
    char src[50] = "abc", dest[50]; //�����������ַ�����(�ַ���) , ��СΪ50
    // ����ʲô���巽ʽ��
    char* str = "abcdff";
    printf("*str: %p\n", *str); // �׵�ַ
    printf("str: %s\n", str);
    printf("&str: %p\n", &str);
    printf("str.len=%d", strlen(str)); //ͳ���ַ����Ĵ�С

    //��ʾ�� "hello" ������ src
    //ע�⣬�����ַ����Ὣԭ�������ݸ���
    strcpy(src, "hello");
    printf(" src=%s", src);

    strcpy(dest, "�й��");
    //strcat �ǽ� src �ַ������������ӵ� dest ,���ǲ��Ḳ��destԭ�������ݣ���������!!
    strcat(dest, src); // "hello�й��"
    printf("���յ�Ŀ���ַ����� dest=%s", dest);
}