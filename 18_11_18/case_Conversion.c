#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
    char ch,ch2,ch3;
    ch = getchar();
    if(islower(ch))
    {
        printf("small case letter:\n");
        ch2 = toupper(ch);
        printf("upper case is: %c ",ch2);

        }else{
            printf("capital or upper case letter");

            ch3=tolower(ch);
            printf("small case is :%c",ch3);



        }
    }


