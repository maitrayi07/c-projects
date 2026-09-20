#include <stdio.h>
#include <math.h>

int main()
{
    int n1,n2,a,b;
    n1=0;
    n2=0;
    printf("Enter number you want to check=");
    scanf("%d",&a);
    if (a%10==a) {
        printf("IT IS ARMSTRONG");
    }
    else {
        int a1,b1;
        a1=a;
        while (a1!=0) {
            b1=a1%10;
            a1=(a1-b1)/10;
            n1+=1;
        }
    }
    int a2=a;
    while (a2!=0) {
        b=a2%10;
        a2=(a2-b)/10;
        n2+=pow(b,n1);
    }
if (a==n2) {
    printf("THE NUMBER IS ARMSTRONG");
}
else {
        printf("THE NUMBER IS NOT ARMSTRONG");
    }
    return 0;
}