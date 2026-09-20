#include <stdio.h>
int main()
{
int a,b;
printf("ENTER BASE-");
scanf("%d",&a);
printf("ENTER EXPONENT-");
scanf("%d",&b);
int i=0;
int q=1;
while (i<b) {
    q=q*a;
    i=i+1;
}
printf("THE FINAL OUTPUT IS=%d",q);
}