#include<stdio.h>
void main(){

    int a[100],loc,item,i,n;

    printf("Enter The Number Size:\n");
    scanf("%d",&n);

    printf("Enter The Element:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter The Search Number:\n");
    scanf("%d",&item);

    for(i=0;i<n;i++)
        if(a[i] == item)
    {
        printf("%d = is parents And %d = location",item,i+1);
        break;
    }

    if(i == n)
    {
        printf("%d=is The Not Found",item);
    }
}
