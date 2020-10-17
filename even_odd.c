#include<stdio.h>
#include<conio.h>
int main(){
   int number;

   printf("Enter Any Positive Number = ");
   scanf("%d",&number);

   if(number%2 == 0){
       printf("Even Number");
   }else{
      printf("Odd Number");
   }

    getch();

}
