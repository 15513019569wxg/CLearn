#include <stdio.h>
#include <string.h>
int main() {
//	打印1—100之间所有能被3整除的数
	int i = 1;
	int max1 = 100;
	while(i <= max1) {
		if( i % 3 == 0 ) {
			printf("\n i=%d 能被3整除", i);
		}
		i++;
	}


//打印40—200之间所有的偶数
	int j = 40;
	int max2 = 200;
	while(j <= max2) {
		if( j % 2 == 0 ) {
			printf("\n j=%d 是偶数", j);
		}
		j++;
	}

//不断输入姓名，直到输入 "exit" 为止[使用while完成]
	//分析
	//1. 需要接受用户的输入，字符串[字符数组]
	//2. 提示： <string.h> 有一个strcmp 函数，判断两个字符串是否相同
	// int strcmp(const char *str1, const char *str2) // 返回0 表示相等，非0表示不相等

	char name[10] = "";

	while( strcmp(name,"exit") != 0) { // exit  = > 0 != 0
		printf("\n请输入名字");
		scanf("%s", name); // 这里不需要 加 &name, 因为 数组的名称就是地址
		printf("\n你输入的名字是=%s", name);
	}
	printf("退出while");

}