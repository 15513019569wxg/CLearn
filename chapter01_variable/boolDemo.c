#include <stdio.h>

//�궨��
#define BOOL int
#define TURE 1

int main() {
    int isPass = -1;
    //����ʹ�ú궨�������(�������ȿ��£����һ�£��������ǻ����궨��)
    //����һ����������
    BOOL isOk = TURE; // �ȼ� int isOK = 0

    if (isPass) { // 0��ʾ�٣� ��0��ʾ��
        printf("ͨ������");
    }

    if (isOk) {
        printf("ok");
    }

}