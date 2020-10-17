#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()  {
        float f []={.0,.05,.11,.21,.35,.51,.67,.80,.90,.97,1.00};
int i ,j,k,m,n,orads,days,run;
float r,hrs ,hours,chours=0.,capacity,idle,wtng,cidle=0.,cwtng=0.;
float cost,costc=50.,costw=100.;
capacity=190.;
printf("\n Enter run");
scanf("%d",&run);
printf("\n Idle capacity cost =%5.2fper hour.", costc);
printf("\n wating timecost =%5.2fper hour.", costw);
while (capacity<=230.){
chours=0.;cidle=0.;cwtng=0.;
hours=0.;
for(days =1;days<=run;++days){
r=rand()/32768.;
for(i=0;i<=9;++i){
j=i+1;
if(r>i/10. && r<=j/10.) orads=j;}
k=orads;
for(j=1;j<=k;++j){
r=rand()/32768.;
for(i=0;i<=10;++i) {
if(r>f[i] && r<=f[i+1])  {hrs=i*5+r*5;
}}
hours =hours+hrs;}
if (capacity>=hours)
    { idle=capacity-hours;
cidle=cidle+idle;}
else{
wtng=hours-capacity;
cwtng=cwtng+wtng;
}
hours=wtng;
idle=0.;wtng=0.;
}
cost=cidle*costc+cwtng*costw;
printf("\n Capacity=%6.2f Total cost=%6.2f Cost per day= %6.2f", capacity,cost,cost/days);
capacity=capacity+5.;

}}

