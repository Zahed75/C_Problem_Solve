#include<stdio.h>
main(){

    int n,p,tag=0;

    printf("Enter The Number : ");
    scanf("%d",&n);

    for(p=2;p<n;p++)
    {
        if(n%p == 0)
        {
            tag =1;
            goto end;
        }
    }

   end:if(tag ==0)
     printf("Prime Number.");

     else
        printf("Non Prime.");

}



