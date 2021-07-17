#include <stdio.h>
bool isPalindrome(long int x);

int main(void)

{
	long int x,x_1,y=0;

	printf("请输入一个数字：\n");
	scanf("%Ld",&x);

	isPalindrome(x);
	printf("%d",isPalindrome(x));
	getchar();
	return 0;
}

bool isPalindrome(long int x) {
	long int y=0,x_1 = x;

	if(x> 0) {
		while(x) {
			y = y * 10 + x % 10;
			x = x / 10;
		}
	}
	return (y == x_1);
}
