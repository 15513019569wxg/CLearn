#include <stdio.h>
int _SQ(int y){ //����, ��y��ƽ��
  return ((y)*(y));
}
#define SQ(y) ((y)*(y))

int main() {
    int i=1;
    while(i<=5){
        printf("%d^2 = %d\n", i-1, _SQ(i++)); // ��һ��
    }

    // ʹ�ú궨��
    int j = 1;
    while (j <= 5) {  //����ѭ�� 3 �Σ��õ����� 1 * 1 = 1  3 * 3 = 9 5 * 5 = 25
        //����
        //  SQ(i++) ����� չ��   ((j++)*(j++))
        printf("%d^2 = %d\n", j - 2, SQ(j++));
    }
}
