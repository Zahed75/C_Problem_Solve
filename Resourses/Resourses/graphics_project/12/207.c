#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SEED 12345

int main(){


        int i,j,k,kk,run,counter;
        int n=6, m=5, s=4;
        float se[10];
        float r,iat,st,nat,wt,cwt;

        float p[]={0.,.05,.4,.65,.80,.90,.97,1.0};
        float at[]={0.,.5,1.0,1.5,2.0,2.5,3.0};
        float f[]={0.,.05,.3,.65,.85,1.0};
        float t[]={1.,2.,3.,4.,5.};

        printf("\n Enter the value of run");
        scanf("%d",&run);

        for(j=2; j<=s; ++j){
            srand(SEED);
            counter=0; nat=0.0; cwt=0.0;
            for(i=1;i<=j;++i){
                se[i]=0.0;
            }
            cwt=0; counter=0;
            for(counter=1; counter<-run;++counter){
                r=rand()/32768.;
                for(i=0;i<=n;++i){
                    if(r>p[i]&&r<=p[i+1]) iat=at[i];
                }
                r=rand()/32768.;
                for(i=0;i<=m;++i){
                    if(r>f[i]&& r<=f[i+1]) st=t[i];
                }
                nat=nat+iat;

                float min=99.9;

                for(i=1;i<=j;++i){
                    if(se[i]<=min)
                    {
                        min=se[i];k=i;
                    }
                }

            if(nat<=min)
            {
                se[k]=min+st; wt=min-nat;
            }
            else{
                se[k]=nat+st;
                cwt=cwt+wt;
            }
        }
        printf("\n Servers=%d Total arrivals=%d Average Waiting time=%6.2f", j, counter,cwt/run);
}
    }
