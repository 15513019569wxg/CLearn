#include <stdio.h>

int main() {
    /*
        ����һ��char���͵�26��Ԫ�ص����飬�ֱ� ����'A'-'Z����
        ʹ��forѭ����������Ԫ�ز���ӡ��������ʾ���ַ��������� 'A'+1 -> 'B'
    */
    char arr[26];
    int i;
    for (i = 0; i < 26; i++) {
        arr[i] = 'A' + i;
    }

    //���
    for (i = 0; i < 26; i++) {
        printf("%c ", arr[i]);
    }

    /*
        �����һ����������ֵ�����õ���Ӧ���±�
        ����
        1. �������� ��С 5
        2. �ٶ� max = arr[0] �������ֵ��Ȼ���������κ��������������бȽϣ�������ֱ� �б�max
        ������������Ӧ�ı仯(�Ѹ��������� max)�������Ǳ������������飬max ���������
    */

    int arr2[] = {0, -1, 89, 99, 4, 0, 23, 876, 9876, 3, 4, 6};
    int arrLen = sizeof(arr2) / sizeof(int);
    int max = arr2[0];
    int maxIndex = 0;
    int j;
    for (j = 1; j < arrLen; j++) {
        //������ֱ� �б�max������������Ӧ�ı仯(�Ѹ��������� max)
        if (arr[j] > max) {
            max = arr[j];
            maxIndex = j;
        }
    }
    printf("max=%d maxIndex=%d", max, maxIndex);
}