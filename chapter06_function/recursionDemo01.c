#include <stdio.h>

void test(int n) {
    /*if(n > 2) {
        test(n -1);
    }
    printf("\nn=%d", n);*/

    if (n > 2) {
        test(n - 1);
    } else {
        printf("\nn=%d", n);
    }


}

int main() {
    test(4); //���?

}