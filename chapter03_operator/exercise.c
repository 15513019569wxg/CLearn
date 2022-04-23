//
// Created by capensis on 2022/4/17.
//
#include <stdio.h>

int main() {
    int second = 894567;
    int hour = second / 3600;
    int min = second % 3600 / 60;
    int leftSecond = second / 60;

    printf("%d Ãë = %d Ð¡Ê± %d ·ÖÖÓ %d Ãë", second,  hour, min, leftSecond);


    int n1 = 10, n2 = 8, n3 = 5;
    int temp;
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n2 > n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("\n%d, %d, %d", n1, n2, n3);
}

