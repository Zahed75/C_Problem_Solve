#include<stdio.h>
main()

{
    int a,b,c,max;

    printf("Enter the Value A:");
    scanf("%d",&a);

    printf("Enter the Value B:");
    scanf("%d",&b);

     printf("Enter the Value c:");
    scanf("%d",&c);

     max=(a>b?a:b)>c?(a>b?a:b):c;

    printf(" The maximum Value.%d",max);


}
