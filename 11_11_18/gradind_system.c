#include<stdio.h>
int main(){

  float marks;

   printf("Please Enter Your Number: ");
   scanf("%f",&marks);

   if(marks>= 80 && marks <= 100 ){
      printf("*** Congratulation! Your Grade Is A+ ***");
   }else if(marks>= 75 && marks <= 79){
      printf("Your Grade Is A");
   }else if(marks>= 70 && marks <= 74){
      printf("Your Grade Is A-");
   }else if(marks>= 65 && marks <= 69){
      printf("Your Grade Is B+");
   }else if(marks>= 61 && marks <= 64){
      printf("Your Grade Is B");
   }else if(marks>= 55 && marks <= 60){
      printf("Your Grade Is B-");
   }else if(marks>= 50 && marks <= 54){
      printf("Your Grade Is C");
   }else if(marks>= 45 && marks <= 49){
      printf("Your Grade Is D");
   }else if(marks>= 40 && marks <= 44){
      printf("Your Grade Is D-");
   }else if(marks>= 100 ){
      printf("Your Number Is Invalid");
   }else{
      printf("Your Are Fail");
   }



}
