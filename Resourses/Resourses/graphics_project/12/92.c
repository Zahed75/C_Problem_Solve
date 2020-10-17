#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
  int i,j,k,m,nn;
  float x,r,mean;

  printf("\n Value of mean = ");
  scanf("%f",&mean);

  printf("\n Value of parameter K = ");
  scanf("%d",&k);

  printf("\n Number Of Random Variates to be Generated = ");
  scanf("%d",&nn);
  printf("\n mean =%6.2f k=%d nn=%d",mean,k,nn);
  printf("\n ");

  printf("\n values of variate X:\n");

  for(m=1; m<=nn; ++m){
    float prod=1;
    for(i=1;i<=k;++i){
        r = rand()/32768.0;
        prod = prod*r;
    }
    x = mean*(-1./k)*log(prod);
    printf("%6.2f",x);
  }

}
