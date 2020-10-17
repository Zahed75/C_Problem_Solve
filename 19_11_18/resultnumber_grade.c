#include <stdio.h>

main()

{
    int num;

    printf("Enter the Number :"); scanf("%d",&num);
    if (num<40)
    {
        printf("You have Faild.\n");
        printf("Take Preparation Again.\n");

    }

  else if (num<=45)

       printf("Your Grade Is D.So It is Very Poor. ");

  else if (num<=50)

       printf("Your Grade Is c. ");

  else if (num<=60)

       printf("Your Grade Is B. ");

  else if (num<=65)

       printf("Your Grade Is B+. ");


  else if (num<=70)

       printf("Your Grade Is A. ");


  else if (num >= 80)

       printf("Your Grade Is A+.congrats. ");


}
