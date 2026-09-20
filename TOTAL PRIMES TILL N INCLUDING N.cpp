#include <stdio.h>
#include <math.h>
int main() {
	int k=0;
	int s;
	int t;
	int sum1=0;
	int n;
	printf("Enter N=");
	scanf("%d",&n);
	while (n>1) {
		s=sqrt(n);
		t=s;
		while (s>1) {
			if (n%s==0) {
				s-=1;}
			else {
				k+=1;
				s-=1;
			}}
	if(k==(t-1)) {
			printf("prime number is=%d\n",n);
			sum1+=1;}
	else {
			;}
		n-=1;}
	printf("Total number of primes are=%d",sum1);
	return 0;
}
