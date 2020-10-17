#include<stdio.h>
int main(){
    int a,b;

    printf("Enter Your First Value = ");
    scanf("%d",&a);

    printf("Enter Your Second Value = ");
    scanf("%d",&b);

    if(a>b){
        printf("The Largest Value Is A");
    }else{
       printf("The Largest Value Is B");
    }

}
