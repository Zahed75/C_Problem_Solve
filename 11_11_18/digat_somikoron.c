#include<stdio.h>
int main(){
   double a,b,c,d,root,img;

   printf("Enter Value A,B,C :: ");
   scanf("%lf %lf %lf",&a,&b,&c);

   d = sqrt(b*b-4*a*c);

   root = (-b+d) / 2*a;
   img = (-b-d) / 2*a;

  printf("The X1 Value Is %lf :=  ",root);
  printf("The X2 Value Is %lf := ",img);
}
