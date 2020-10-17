#include<stdio.h>
#include<stdlib.h>
main(){
  int i,j,k,n,nn;
  float rnd,y;

  float x[] = {1.5,2.5,4.0,5.5,6.0};
  float p[] = {0.0,0.1,0.25,0.65,0.90,1.0};
  n=4;
  printf("\n x[i]=      ");
  for(i=0;i<=n;++i){printf("%6.2f",x[i]);}

  printf("\n p[i]=      ");
  for(i=0;i<=n+1;++i){printf("%6.2f",p[i]);}
  printf("Number of Variates to be generateds (nn)=");
  scanf("%d",&nn);

  printf("\n Values Of Variates X:\n ");

  for(k=1;k<=nn;++k){
     rnd = rand()/32768.0;
     for(i=0;i<=n;++i){
        j = i+1;
        if((rnd>p[i]) && (rnd <= p[j])) y=x[i];
     }
     printf("%5.1f",y);
  }




}
