#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 main(){
    double a11,a21,a22,b1,b2,k11,k12,k21,k22,k31,k32,k41,k42,e1,i;
    a11 = -50.;a21= -100000.;a22= -2.15*10.;
    b1 = - a11;b2=-a21;
    double t=0.,v1=0.,v2=0.;
    double h = .05,el=1.5;
    int  I,k;
    int n = 10;

    printf("\n a11=%8.2f a21=%8.2f  a22=%8.2f  h=%4.2f  e1=%4.2f",a11,a21,a22,h,e1);
    printf("\n I Time(u sec.)  voltage,v1 voltage v2");
    for(i=1;i<=n;++i){
    k11 = h*((a11*v1) + e1);
    k12 = h*((a21*v1) + (a22*v2)+b2);
    k21 = h*(a11*(v1+.5*k11)+b1);
    k22 = h*(a21*(v1+.5*k11)+a22*(v2+.5*k12)+b2);
    k31 = h*(a11*(v1+.5*k21)+b1);
    k32=h*(a21*(v1+.5*k21)+a22*(v2+.5*k22)+b2);
    k41 = h*(a11*(v1+k31)+b1);
    k42=h*(a21*(v1+k31)+a22*(v2+k32)+b2);
    v1=v1+(k11+2.*k21+2.*k31+k41)/6.;
    v2=v2+(k12+2.*k22+2.*k32+k42)/6.;
    t=t+h;
    printf("\n %d %8.2f  %12.4f  %12.4f",i,t,v1,v2);
    }
    printf("\n any digit");
    scanf("%d",k);
}
