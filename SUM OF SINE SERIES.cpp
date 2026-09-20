#include <stdio.h>
#include <math.h>
int main() {
	int n;
	float x;
	float sum=0;
	int n1=0;
	int n2=0;
	printf("Enter number of terms=");
	scanf("%d",&n);
	printf("Enter value in radians=");
	scanf("%f",&x);
	int n3;
	int n4=1;
	while (n!=0) {
		n1=n+(n-1);
		n3=n1;
		n4=1;
		if (n%2==0) {
			while (n3>1){
				n4*=n3*(n3-1);
				n3-=2;}
			sum-=(pow(x,n1))/n4;
			n-=1; }
		else {
			while (n3>1){
				n4*=n3*(n3-1);
				n3-=2;}
			sum+=(pow(x,n1))/n4;
			n-=1;
		}
		}
		printf("The sum of the series is=%f",sum);
		return 0;
		
	}