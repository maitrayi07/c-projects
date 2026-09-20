#include <stdio.h>
int main()
{
	int i,j,ch=5;
	int a=1;
	for(i=0;i<ch;i++) {
		for(j=0;j<i+1;j++) {
			printf("%d  ",a);
			a+=1;
		}
		printf("\n");
	}
}