#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
    int q1,q2,rp1,rp2,tdays,dmd,cdmd,stk,cstk,day,dd1,dd2,lt1,lt2;
    int ishort,cshort,ord,ord1,ord2;
    float x,avstk,s1;
   q1 = 10; q2=10;
   day= 1;dd1=0;dd2=0;tdays=1000;
   rp1=2,rp2=2,ord1=0;ord2=0;
   ishort=0;cshort=0;cdmd=0;
   printf("\n Enter Value Of initial stk = ");
   scanf("%d",&stk);

   printf("\n initial stock = %d",stk);
   cstk = stk;
   /* printf("initial stock =%d q1=%d q2=%d",q1,q2) */
   for(day=1;day<=tdays;++day){
        x = rand()/32768.0;
        if(x<=0.15) dmd=4;
        else if((x>0.15) && (x<=0.45)) dmd=5;
        else if((x>0.45) && (x<=0.80)) dmd=6;
        else dmd = 7;
        cdmd = cdmd+dmd;

        if(day>=dd1){
            stk = stk+ord1;
            dd1=0;
            ord1=0;}
            if(day>=dd2){
                stk=stk+ord2;
                dd2=0;
                ord=0;}
                if(stk<=rp1){
                    ord1=q1;
                 x = rand()/32768.0;
                 if(x<=0.2) lt1=2;
                 else if((x>0.2) && (x<=0.8)) lt1=3;
                 else lt1 = 4;
                 dd1 = day+lt1;
                }

                if(stk<rp2){
                    ord2 = q2;
                    x = rand()/32768.0;
                    if(x<=0.2) lt1 = 2;
                    else if((x>0.2) && (x<=0.8)) lt1=3;
                    else lt1 = 4;
                    dd2 = day+lt1;
                }
                if(dmd<=stk) ishort = 0;
                else ishort=dmd-stk;
                cshort = cshort+ishort;
                stk = stk-dmd;
                cstk = cstk+stk;
                if(stk<=0) stk=0;
                if(dd1>0) dd1 = dd1-1;
                if(dd2>0) dd2 = dd2-1;
                }
                float days =tdays;
                avstk = cstk/days;
                s1 = (cdmd-cshort)*100.0/cdmd;

                printf("\n simulation run = %d days",tdays);

                printf("\n q1=%d q2=%d Rp1 = %d RP2=%d ",q1,q2,rp1,rp2);
                printf("\n Average Stock =%7.2f% Service Level = %5.2f",avstk,s1);
}
