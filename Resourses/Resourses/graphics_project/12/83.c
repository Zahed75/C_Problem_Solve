#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){

    int x,j,nn,m,s,k;
    float p,r;

    printf("\n Enter The Value of p(<1.0)=");
    scanf("%f",&p);

    printf("\n Enter The Value of k(>=1)=");
    scanf("%d",&k);

    printf("\n value Of Parameter k = %d",k);
    printf("\n probability of success in a trial=%4.2f",p);
    printf("\n Number Of Variates to be generated=");
    scanf("%d",&nn);

    printf("\n Values of variates X:");

    for(j=1;j<=nn;++j){
       x=0;s=0;
       while(s<k){
        r = rand()/32768.0;
        if(r<=p){s=s+1;}
        x=x+1;
       }
       printf("%4d,",x);
    }

}
