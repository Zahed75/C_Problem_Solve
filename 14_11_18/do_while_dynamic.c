#include<stdio.h>
int main(){


     int i;
     int condition;

     printf("Please Enter Your Starting Number:");
     scanf("%d",&i);

     printf("Please Enter Your Ending Number:");
     scanf("%d",&condition);

      do{
        printf(" The Number Is = %d \n",i);
        i--;


      }while(i>=condition);
      getch();


}


