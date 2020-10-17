#include<stdio.h>
int main(){

char ch;

 printf("Enter Capital Or Small Letter: \n");
 scanf("%c",&ch);

 if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||
    ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
    printf("This Letter Is Vowel");
    }
 else
    printf("This Letter is Consonent");

}

