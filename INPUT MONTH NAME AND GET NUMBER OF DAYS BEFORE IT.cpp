#include <stdio.h>

int main()
{
    int a=1;
    int n=0;
    int b;
    printf("INPUT THE MONTH-");
    scanf("%d",&b);
    while (a<=b) {
        if (a==2) {
            n=n+28;
        }
        else if (a<=6 && a%2==0) {
            n=n+30;
        }
        else if (a<6 && a%2==1) {
            n=n+31;
        }
        else if (a>6 && a%2==0) {
            n=n+31;
        }
        else {
            n=n+30;
        }
    a=a+1;
        
    }
    printf("THE TOTAL NUMBER OF DAYS ARE=%d",n);
    return 0;
}