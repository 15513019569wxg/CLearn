#include <stdio.h>


//ð������ĺ���
void bubbleSort(int arr[], int arrLen) {
    //��Ϊÿ�����򼸺�һ������ˣ����ǿ���ʹ��forѭ������
    int j, i;
    int t;//��ʱ����
    for (i = 0; i < arrLen - 1; i++) {
        for (j = 0; j < arrLen - 1 - i; j++) {
            //���ǰ��������ں���������ͽ���
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main() {
    int arr[] = {3, 9, -1, 10, -2, -11};
    int arrLen = sizeof(arr) / sizeof(int); // ͨ������õ�
    int j;
    bubbleSort(arr, arrLen); // ����Ĭ���ǵ�ַ����(ָ��)
    printf("\n�����(����)\n");
    for (j = 0; j < arrLen; j++) {
        printf("%d ", arr[j]);
    }
}