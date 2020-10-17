#include <stdio.h>
 int main()

{

    int casevalue;
    printf("Enter The Value :");
    scanf("%d",&casevalue);

    switch (casevalue)

    {
    case 1 :
        printf("............Saturday.................");
        break;
    case 2 :
        printf("Sunday");
        break;
    case 3 :
        printf("Monday");
        break;
    case 4 :
        printf("Twesday");
        break;
    case 5 :
        printf("Wednesday");
        break;
     case 6 :
        printf("Thuresday");
        break;
     case 7 :
        printf("Friday");
        break;

      default :
           printf("Invalid Input");
          break;
    }

    printf("\n \n The program is over !");


}
