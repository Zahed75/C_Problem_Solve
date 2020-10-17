#include <stdio.h>

main()

{
    int units,coustomernumber,billamount;

    first:

    printf("Enter the Coustomer Number:\n");

    scanf ("%d",&coustomernumber);

    printf("Enter the Coustomer units:.....");

    scanf ("%d",&units);

    if (units <=200)
        billamount = units*2;

    else if (units<=400)
        billamount = (units*5)+100;

    else if (units<=600)
        billamount = (units*6)+200;

     else
        billamount = (units*7)+300;

     printf("\n Coustomer NO.%d & His Total Bill Is:BDT.%d \n",coustomernumber,billamount);

     goto first;
}
