#include<stdio.h>

#define MAX 50

int main()
{
    int i,j;

    for(i=0; i< MAX; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
