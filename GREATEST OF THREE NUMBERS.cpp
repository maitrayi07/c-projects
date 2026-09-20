#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("ENTER VALUE 1=");
    scanf("%d",&a);
    printf("ENTER VALUE 2=");
    scanf("%d",&b);
    printf("ENTER VALUE 3=");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("THE GREATEST NUMBER IS a");
    }
    else if (b>a && b>c) {
      printf("THE GREATEST NUMBER IS b");  
    }
    else if (c>a &&c>b) {
        printf("THE GREATEST NUMBER IS c");
    }
    else {
        printf("NO NUMBER IS THE GREATEST");
    }
    return 0;
}