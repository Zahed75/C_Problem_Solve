#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
    float v = 100.,angle,theta,delv,pi=22./7.,m=30.,c=.001,delt=.01,g = 9.81;
    float x,y;
    float vel[10],range[10];
    float delx,dely,dtheta,xx,yy;
    int i,j,k;
    printf("\n enter the value of mass = ");
    scanf("%f",&m);
    printf("\n ===      RANGE TABLE ");
    printf("\n =====        Mass of Projectile = %5.2f kg",m);
    printf("\n        Release  velocity (m/sec.) \n ");
    printf("\n ===================================\n ");
    for(j=0;j<=5;++j){
    printf("%10.2f",100.+j*10.);}
    printf("\n Release ");
    printf("\n Angle(0) ");
    for(i=0;i<=5;++i){
    angle =30.+i*10.;
    for(j=0;j<=5;++j){
    v=100.+j*10.;
    x=0.; y=.0001;
    theta = angle*pi/180.;
    while(y>=0.){
    delv = (-g*sin(theta)-c*v*v/m)*delt;
    dtheta = -g*cos(theta)*delt/v;
    delx = v*cos(theta)*delt;
    dely = v*sin(theta)*delt;
    v+= delv;
    theta+=dtheta;
    x+=delx;
    y+=dely;
   }
    range[j] = x;
    }
    printf("\n\n %4.1f",angle);
    for(j=0;j<=5;++j){
    printf("%10.2f",range[j]);
    }
}
}
