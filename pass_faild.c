#include<stdio.h>

int main(){

     int mark;

     printf("Enter Mark: ");
     scanf("%d",&mark);

     if(mark >= 33 && mark <= 100){
         printf("You Are Pass");
     }else{
         printf("You Are Fail");
     }

}

