#include<stdio.h>
#include<math.h>

int main(){

   double a,b,c,area,s;

   printf("Enter Your (A) Value:");
   scanf("%f",&a);

   printf("Enter Your (B) Value:");
   scanf("%f",&b);

   printf("Enter Your (C) Value:");
   scanf("%f",&c);

   s = (a+b+c)/2;
   area =sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area is = %.2f \n",area);
   getch();

}

