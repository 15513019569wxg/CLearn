#include <stdio.h>


//冒泡排序的函数
void bubbleSort(int arr[], int arrLen) {
    //因为每轮排序几乎一样，因此，我们可以使用for循环处理
    int j, i;
    int t;//临时变量
    for (i = 0; i < arrLen - 1; i++) {
        for (j = 0; j < arrLen - 1 - i; j++) {
            //如果前面的数大于后面的数，就交换
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
    int arrLen = sizeof(arr) / sizeof(int); // 通过计算得到
    int j;
    bubbleSort(arr, arrLen); // 数组默认是地址传递(指针)
    printf("\n排序后(函数)\n");
    for (j = 0; j < arrLen; j++) {
        printf("%d ", arr[j]);
    }
}