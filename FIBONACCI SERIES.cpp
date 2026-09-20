#include <stdio.h>
int main() {
	int a,b;
	int c1=0;
	int c2=0;
	char comma= ',';
	printf("ENTER START RANGE-");
	scanf("%d",&a);
	printf("ENTER B-");
	scanf("%d",&b);
	for (int i=a;i<=b;i++) {
		if ((i+i)==(i+1)) {
			printf("%d%c",i,comma);
			printf("%d%c",i,comma);
			c1=i;
			c2=i;}
		else if((c1+c2)==i) {
			printf("%d%c",i,comma);
			c1=c2;
			c2=i;
		}
		}
		return 0;
	}