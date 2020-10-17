#include<stdio.h>
void main(){

    int la[50],i,n,k,item,position;

    printf("Enter The Array Size:\n");
    scanf("%d",&n);

     printf("Enter The Element:\n");
      for(i=0;i<n;i++)
      scanf("%d",&la[i]);

      printf("Enter the insert position:\n");
      scanf("%d",&position);

      printf("Enter The value:\n");
      scanf("%d",&item);

      for(i=n; i>=position-1;i--)
      {
          la[i+1] = la[i];
      }
      la[position] = item;

      n = n+1;

      printf("Output :\n");

      for(i=0;i<n;i++)
      {
          printf("Output:%d \n",la[i]);
      }


}
