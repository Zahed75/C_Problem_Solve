#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()

{
int arvls=0,counter=0,lost=0,qmax,q=0,i,k;
float se[10];
float r,st,clock=0.,iat,nat=0.,mue=0.5,run,delta=0.3;
qmax=4;run=5000.;
printf("\n\n Number of washing stalls=");
scanf("%d",&k);
printf("Capacity of waiting space=%d",qmax);
r=rand()/32768.;
nat=(-1/mue)*log(1.-r);
for(i=1;i<=k;++i)

{
r=rand()/32768.;
if(r<=0.2) se[i]=5.;
else if(r>0.2 && r<0.85) se[i]=10.;
else se[i]=15.;
}
while(clock<=run){
if(clock>=nat)
{
if(q<qmax) q=q+1;
else lost=lost+1;
r=rand()/32768.;
iat=(-1/mue)*log(1-r);
nat=clock+iat;
arvls=arvls+1;
}
for(i=1;i<=k;++i){

if(clock>=se[i]){
if(q>0)
{
q=q-1;r=rand()/32768.;
if(r<=0.2) st=5.;
else if(r>0.2 &&r<=0.85) st=10.;
else st=15.;
se[i]=clock+st;
counter=counter+1;

}
}
}
clock=clock+delta;
}
printf("\n Clock=%6.2f Arrivals=%d Served %5.2f Lost= %5.2f",clock,arvls,(100.*counter/arvls), (100.*lost/arvls));
}
