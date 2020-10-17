#include<stdio.h>
main()
{
    int *p,*q,m[4]={100,200,300,400};
     p=m;
    *p=10;
     q=p;
     printf("%d,\n%d,\n%d,%d",m[0],*q,*(q+1),*p);
}
