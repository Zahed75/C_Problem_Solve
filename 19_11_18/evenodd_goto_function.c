#include <stdio.h>

int main()

{
    int x;
    point:
    printf("\n Enter a number:");
    scanf("%d",&x);

    if ((x/2)*2 == x)
    {
        printf("\n This Is Even Number.");
    }
    else
        printf("\n This Number Is Odd");

        goto point;
}
