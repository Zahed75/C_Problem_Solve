#include<stdio.h>
#include<stdlib.h>
void main(){

  char s[20],c;
  int state=0,i=0;
  printf("\n Enter a String:");
  gets(s);
  while(s[i]!='\0')
  {
      switch(state)
      {
          case 0: c =s[i++];
          if(c=='a')
            state=1;
          else if(c=='b')
            state=2;
          else
            state=3;
            break;
        case 1: c=s[i++];
        if(c =='a')
            state=1;
         else if(c=='b')
            state = 2;
         else
            state = 3;
         break;
         case 2: c = s[i++];
         if(c=='a')
            state = 1;
         else if(c=='b')
            state = 2;
         else
            state=3;
         break;
         case 3: printf("\n %s is not recognised", s);
         exit(0);

      }
  }

  if(state==1)
    printf("\n %s is Accept under rule'a+'",s);
  else if(state == 2)
    printf("\n %s is Accept under rule'a*b+'",s);
  else
    printf("\n %s is not Accept under any Rules",s);
 getch();
}
