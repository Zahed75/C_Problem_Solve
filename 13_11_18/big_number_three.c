#include<stdio.h>
int main(){

    int number1,number2,number3;

    printf("Please Enter Three Number One,two,three: ");
    scanf("%d %d %d",&number1,&number2,&number3);


    if(number1 > number2 && number1 > number3 ){
         printf("%d is Large Number",number1);

    } else if(number2 > number1 && number2 > number3){
         printf("%d is Large Number",number2);

    }else if(number3 > number1 && number3 > number2){
         printf("%d is Large Number",number3);
    }
       getchar();


}
