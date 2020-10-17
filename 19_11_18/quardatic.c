#include <stdio.h>
#include <math.h>
main(){
    float a,b,c,root1,root2,x,desk;
    printf("Enter the value of a b c respectively:");
    scanf("%f %f %f",&a,&b,&c);

    desk = b*b-4*a*c;

    if (desk<0)
    {
        printf("The roots are is imaginary part Number..");
    }
    else
    {
    root1 = ( -b + sqrt(desk) )/(2.0*a);
    root2 = ( -b - sqrt(desk) )/(2.0*a);

    printf("The root is:%.2f %.2f ",root1,root2);

    }






}
