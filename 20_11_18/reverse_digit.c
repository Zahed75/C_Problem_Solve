#include<stdio.h>
#include<conio.h>

main(){

    int n,r;
    first:

    printf("\n Enter The Number: ");
    scanf("%d",&n);

    while(n>0)
    {
        r = n%10;
        printf("%d",r);
        n = n/10;
    }

    goto first;

}


