#include <stdio.h>
int f(int a);
int main(void)

{
	int a;



	f(a);

	return 0;
}

int f(int a) {

	int i,j;
	scanf("%d",&a);

	for(i=1; i<=a; i++) {
		for(j=i; j<=a; j++) {
			if(j==i) {
				printf(" \n");
			}
			printf("%2d*%2d=%3d   ",j,i,i*j);
		}
	}
	getchar();
	return 0;
}


