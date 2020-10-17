#include<stdio.h>
#include<math.h>
int main(){

   int number1,number2;

   printf("enter first Number:");
   scanf("%d",&number1);

   printf("enter second Number:");
   scanf("%d",&number2);

   double result = pow(number1,number2);
   printf("%lf",result);

   getch();



}
