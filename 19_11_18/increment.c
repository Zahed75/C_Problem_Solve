#include<stdio.h>

int main ()

{
    int a,b;

    a=5;

    a++;

    printf("%d ",a);

    ++a;
    printf("\n%d",a);

    b = ++a;
    printf("\n%d %d",a,b);
}
