#include<stdio.h>

int main(){

     int mark;

     printf("Enter Mark: ");
     scanf("%d",&mark);

     if(mark>100 || mark <0 ){
        printf("Invalid Number");

     }else if(mark>=80 && mark <= 100 ){
        printf("Your Grade is A+");

     }else if(mark>=70 && mark <= 79 ){
        printf("Your Grade is A");

     }else if(mark>=60 && mark <= 69 ){
        printf("Your Grade is A-");

     }else if(mark>=55 && mark <= 59 ){
        printf("Your Grade is B+");

     }else if(mark>=50 && mark <= 54 ){
        printf("Your Grade is B");

     }else if(mark>=45 && mark <= 49 ){
        printf("Your Grade is B-");

     }else if(mark>=40 && mark <= 44 ){
        printf("Your Grade is C");
     }
     else if(mark>=33 && mark <= 39 ){
        printf("Your Grade is D");
     }
     getch();


}


