#include <stdio.h>
#include <stdlib.h>
int walkthestairsslow(int j,int k);
int walkthestairs(int n);

int main() {
	int n=42;
	printf("%d",walkthestairs(n));
	getchar();
	return 0;
}

int walkthestairs(int n) {
	int l=n,t=0,numq=0;
	while(l>=0) {
		numq +=walkthestairsslow(l,t);
		//printf("%d\n",walkthestairsslow(l,t));
		printf("%d\n",l);
		t++;
		if(l==1||l==0) {
			break;
		}
		if(l>=2) {
			l-=2;
		}
	}
	return numq;
}

int walkthestairsslow(int j,int k) {
	//int ;
	long int num=1,sum,i=1;
	sum=j+k;
	if(j==0||k==0) return 1;
	if(j >= k) {
		while(k) {
			num *= sum;
			num /= i;
			sum--;
			k--;
			i++;
		}
	} else {
		while(j) {
			num *= sum;
			num /= i;
			sum--;
			j--;
			i++;
		}
	}
	return num;
}