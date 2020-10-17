#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
  int kk,i,j,run=100;
  float x,iat,st,awt,pcu,wt=0,it=0.;
  float mean=10.,sd = 1.5,mue=9.5,cigma=1.0;
  float sb=0.,se=0.,cit=0.,cat = 0.,cwt=0.;
  printf("\n IAT CAT SB ST SE CWT CIT");

  for(j=1;j<=run;++i){
    /* Generate inter arrival time */
    float sum=0.;
    for(i=1; i<=12; ++i){
        x = rand()/32768.0;
        sum = sum+x;}

    iat = mean + sd *(sum-6.);
    cat = cat+iat;
    /*
     printf("\n iat = %6.2f cat=%6.2f",iat,cat);
    */
    if(cat<=se){sb=se;wt=se-cat;cwt=cwt+wt;}
    else{sb=cat;it=sb-se;cit=cit+it;}

    /*Generate Service Time*/
    sum = 0;
    for(i=1;i<=12;++i){
        x = rand()/32768.0;
        sum = sum+x;
        st = mue*cigma*(sum-6.);
        se=sb+st;
        printf("\n %5.2f,%6.2f %6.2f %6.2f %6.2f %6.2f %6.2f ",iat,cat,sb,st,se,cwt,cit);
    }
    awt = cwt/run;
    pcu = (cat-cit)*100./cat;
    printf("\n Average Waiting Time = %6.2f",awt);
    printf("\n Percentage Capacity Utilisation = %6.2f",pcu);
    printf("\n any Digit");
    scanf("%d",kk);
  }








}


