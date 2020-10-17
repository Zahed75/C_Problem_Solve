#include<stdio.h>
int main(){

char ch;

 printf("Enter Capital Or Small Letter: \n");
 scanf("%c",&ch);

 if(ch>='a' && ch<='z')
     printf("Small Letter");

 else if(ch>='A' && ch<='Z')
     printf("Capital Letter");
 else
     printf("Not Of All");
     getch();
}
