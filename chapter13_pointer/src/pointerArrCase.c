#include <stdio.h>

int main() {

    //定义一个指针数组，该数组的每个元素，指向的是一个字符串
    char *books[] = {
            "三国演义",
            "西游记",
            "红楼梦",
            "水浒传"
    };
    char *pStr = "abc";
    printf("\"abc\"的地址=%p pStr指向的内容=%s\n", pStr, pStr);
    printf("\"abc\"的地址=%p pStr指向的内容=%c\n", pStr, *pStr);

    printf("=======================================================");

    //遍历
    int i, len = 4;
    for (i = 0; i < len; i++) {
        printf("\nbooks[%d] 指向字符串=%s   pStr的地址：%p", i, books[i], &pStr);
    }


}