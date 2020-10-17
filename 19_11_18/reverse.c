#include<stdio.h>
main()
{
   int a[6],i;

   for(i=0; i<6; i++)
    scanf("%d",&a[i]);

   for(i = 5;i>=0;i--)
    printf("%d ",a[i]);
}

