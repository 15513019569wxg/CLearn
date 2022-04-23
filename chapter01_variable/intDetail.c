#include <stdio.h>

int main() {
	long long num1 = 12147483647;
	//如果输出的是 long 则格式 %ld
	//如果输出的是 long long 则格式 %lld
	printf("%lld", num1);
}