#include <stdio.h>


/* �������� */
double getAverage(int *arr, int size); //��������
double getAverage2(int *arr, int size); //��������
int main() {
    /* ���� 5 ��Ԫ�ص���������  */
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg, avg2;
    /* ����һ��ָ�������ָ����Ϊ���� */
    avg = getAverage(balance, 5);
    printf("Average value is: %f\n", avg);

    printf("\n");

    avg2= getAverage2(balance, 5);
    /* �������ֵ  */
    printf("Average value is: %f\n", avg2);

}

//˵��
//1. arr ��һ��ָ�� (���p�Ǹ�ָ���������p[i] ��Զ�ȼ��� *(p+i))
double getAverage(int* arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i) {
        // arr[0] = *(arr + 0)
        // arr[1] = *(arr + 1��int�ֽ�)
        // arr[2] = *(arr +  2��int�ֽ�)
        //...
        sum += arr[i];// arr[0] =>�����һ��Ԫ�صĵ�ַ arr[1]
        printf("\narr��ŵĵ�ַ=%p ", arr);
    }
    avg = (double) sum / size;
    return avg;
}

double getAverage2(int* arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i) {
        sum += *arr;
        printf("\narr��ŵĵ�ַ=%p ", arr);
        arr++;  // ָ���++����, ���arr ��ŵĵ�ַ���޸�
    }
    avg = (double) sum / size;
    return avg;
}


double getAverage3(int* arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i) {
        sum += *arr;
        printf("\narr��ŵĵ�ַ=%p ", arr);
        arr++;  // ָ���++����, ���arr ��ŵĵ�ַ���޸�
    }
    avg = (double) sum / size;
    return avg;
}




