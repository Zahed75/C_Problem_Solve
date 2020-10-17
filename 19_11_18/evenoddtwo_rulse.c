#include <stdio.h>
main()

{
    int x;
    point:
    printf(" \n Enter a number:");
    scanf("%d",&x);

    x%2 == 0 ? printf("\n Even Number:\n") : printf("\n Odd Number:\n");
    goto point;
}
