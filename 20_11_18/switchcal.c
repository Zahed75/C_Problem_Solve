#include <stdio.h>

main()

{
    float num1 ,num2;
    char ops;
    point:

    printf("\n Enter the number1 and number2: \n");
    scanf("%f %f",&num1,&num2);

    printf("\n Enter the operator :"); ops = getche ();
    printf("\n");

    switch (ops)
       {
       case '+' :
            {
                printf("The operator is +.\n");
                printf("The result is: %.2f",num1+num2);
                break;
            }
        case '-' :
            {
                printf("The operator is -.\n");
                printf("The result is: %.2f",num1-num2);
                break;
            }

        case '*' :
            {
                printf("The operator is *.\n");
                printf("The result is: %.2f",num1*num2);
                break;
            }
        case '/' :
            {
                printf("The operator is /.\n");
                printf("The result is: %.2f",num1/num2);
                break;
        default :
            printf("There is something wrong !");
            break;
            }

       }
       goto point;






}
