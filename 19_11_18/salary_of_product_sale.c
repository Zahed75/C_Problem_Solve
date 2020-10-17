#include <stdio.h>

main()
{
    float salary,x;

    printf("Enter the number of sold items:");
    scanf("%f",&x);

    salary = (x!=40) ?((x<40)?(4*x+100):(4.5*x+150)):300;


    printf("\n The Total Salary :%f",salary);

}
