#include<stdio.h>
void main()
{
    int a[100],beg,enid,mid,item,loc,i,n;


    printf("************************************\n");
    printf(" \n Binary Search In Integer Value \n");
    printf("\n*************************************\n");

    printf("Enter The Number Size:\n");
    scanf("%d",&n);

    printf("Enter The Element:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter Search Number:\n");
    scanf("%d",&item);

    beg = 1;
    enid = n;
    mid = (beg+enid)/2;

    while(beg<=enid && a[mid]!=item)
    {
        if(item<a[mid])
        {
          enid = mid-1;
        }
        else{
            beg = mid+1;
        }
        mid = (beg+enid)/2;

    }
    if(a[mid == item])
    {
        loc = mid;
        printf("data=%d,location=%d",item,loc);
    }
    else{
        printf("Data = %d Not Found",item);
    }

}
