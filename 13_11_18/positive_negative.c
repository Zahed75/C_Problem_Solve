#include<stdio.h>
int main(){
   int num;

   printf("Enter Any Number:");
   scanf("%d",&num);

   if(num > 0){
      printf("This Is Positive");
   }else if(num < 0){
       printf("This Is Negative");
   }else{
       printf("This Is Zero or");
   }

}
