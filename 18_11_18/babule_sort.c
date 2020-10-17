#include<stdio.h>
void main(){

    int arr[100],i,j,n,temp;

    printf("Enter The Number Size:\n");
    scanf("%d",&n);

    printf("Enter Element:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++)
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    printf("After Sorting :\n");

    for(i=0;i<n;i++)
     printf("%d sorting Output:\n",arr[i]);
}
