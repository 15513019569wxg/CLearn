#include <stdio.h>

int main() {

    //����һ��ָ�����飬�������ÿ��Ԫ�أ�ָ�����һ���ַ���
    char *books[] = {
            "��������",
            "���μ�",
            "��¥��",
            "ˮ䰴�"
    };
    char *pStr = "abc";
    printf("\"abc\"�ĵ�ַ=%p pStrָ�������=%s\n", pStr, pStr);
    printf("\"abc\"�ĵ�ַ=%p pStrָ�������=%c\n", pStr, *pStr);

    printf("=======================================================");

    //����
    int i, len = 4;
    for (i = 0; i < len; i++) {
        printf("\nbooks[%d] ָ���ַ���=%s   pStr�ĵ�ַ��%p", i, books[i], &pStr);
    }


}