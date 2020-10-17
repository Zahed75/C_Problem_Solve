#include <stdio.h>
#include <math.h>

main()

{
    /*a2+2ab+b2*/

    float a,b,result;

    float  w,x,y,z;
    printf("Enter a & b:"); scanf(" %f %f",&a ,&b);

    x = pow(a,2); y = pow(b,2);
    w = pow(a,3); z = pow(b,3);

    result = w-3*x*b+3*a*y-z;

    printf("\nThe Result is: %f",result);

}
