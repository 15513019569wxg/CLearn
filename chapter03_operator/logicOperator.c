#include <stdio.h>

int main() {

    double score1 = 70;//�ɼ�
    if (score1 >= 60 && score1 <= 80) {
        printf("ok1");
    } else {
        printf("ok2");
    }

    int a = 10, b = 99;
    //˵����
    //1. �ڽ��� && ����ʱ, �����һ������Ϊfalse ,���������������ж�
    //2. �������Ϊ ��·�������� �߼��� Ҳ��Ϊ ��·�߼���
    if (a < 2 && ++b > 99) {  //
        printf("ok100");
    }
    printf("b=%d\n", b); //b=99

    a = 10, b = 99;
    //˵��
    //1. �ڽ����߼���ʱ�������һ������Ϊ�棬����ִ�к�����������������Ϊ��
    //2. �������Ϊ �߼����·������� �߼���Ҳ��Ϊ ��·�߼���
    if (a > 5 || b++ > 100) { //
        printf("ok100");
    }
    printf("b=%d\n", b); // b= 99

    int score2 = 100;
    int res = score2 > 199;   // res = 0
    if (res) {
        printf("hello, tom\n");
    }
    if (!res) { //T
        printf("hello,jack\n");
    }


}