//求最大公约数。
#include<stdio.h>
int main() {
	int m = 0;
	int n = 0;
	printf("请分别输入m，n的值:\n");
	scanf("%d%d", &m, &n);
	int temp = 0;
	while (m % n) {
		temp = m % n;
		m = n;
		n = temp;
	}
	printf("最大公约数为%d\n", n);
	return 0;
}
