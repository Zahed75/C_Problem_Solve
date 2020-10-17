#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   int a,b,k,i,j,m,nn,seed,r[50];
   printf("\n Enter The Integer Values of a,b,m");
   scanf("%d %d %d",&a,&b,&m);

   printf("\n Enter The Integer Values of Seed");
   scanf("%d ",&seed);

   printf("\n Enter The Number Of Random Number to be generated");
   scanf("%d ",&nn);
   r[0] = seed;
   for(i=1;i<=nn;++i){
    r[i] = (a*r[i-1]+b)%m;
    printf("%4d",r[i]);
   }
}
