#include <stdio.h>
#include <math.h>

main()

{
    float x,y;
    point:
    printf("Enter the number :"); scanf("%f",&x);

   if (x<0) goto point;
    y = sqrt (x);
    printf("The squre root is :%f \n",y );

    goto point;
}
