#include<stdio.h>
#include<math.h>
int main(){

   double number1;

   printf("Enter Number :");
   scanf("%lf",&number1);


   double result = sin(number1);
   printf("sin(%lf) = %lf",number1,result);

   getch();



}

