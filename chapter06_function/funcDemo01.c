#include <stdio.h>

//˵��
//1. ������ cal
//2. �з���ֵ double
//3. �β��б�Ϊ (int n1, int n2, char oper)
//4. �ں����У�����ʹ�õı�������Ҫ���β��б��еı�����һ��
double cal(int n1, int n2, char oper) {
    //����һ������ res ,��������Ľ��
    double res = 0.0;
    switch (oper) {
        case '+' :
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        default :
            printf("������������");
    }
    printf("\n%d %c %d = %.2f\n", n1, oper, n2, res);
    return res;
}

/**
 * ��������
 * @return  ������
 */
int main() {
    int num1 = 10; //��һ����
    int num2 = 20;//�ڶ�����
    double res;//���
    char oper = '-'; //�����
    //������Ҫ������������һ�������
    int num3 = 60;
    int num4 = 80;
    double res2;
    char oper2 = '*';
    printf("ʹ�ú����������������");
    //ʹ�ú��������������������
    res = cal(num1, num2, oper); //���ú�����ʹ�ú���
    printf("\n cal �������صĽ�� res=%.2f", res);
    //ʹ�ú�����ɵڶ�����������
    res2 = cal(num3, num4, oper2); //���ú�����ʹ�ú���
    printf("\n cal �������صĽ�� res2=%.2f", res2);


}