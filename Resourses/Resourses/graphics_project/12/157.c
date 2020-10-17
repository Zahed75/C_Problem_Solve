#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int day,stk,cstk,ordd,ddue,dmd,cdmd,shortage,cshort,rp,q,lt;
    float x,y,avstk,s1;
    int tdays;
    stk=10;
    lt=3;
    rp=10;
    q=15;
    day=1;
    cstk=0;
    ordd=0;
    ddue=0;
    shortage=0;
    dmd=0;
    cdmd=0;
    cshort=0;

    printf("\n Length of simulation run (tdays)= ");
    scanf("%d",&tdays);
    printf("\n Initial stock=%d",stk);
    printf("\n Lead time=%d",lt);
    printf("\n Reorder point=%d",rp);
    printf("\n Reorder quantity=%d",q);

    for(day=1;day<=tdays;++day)
    {
        stk=stk-dmd;
        if(stk<=0)
            stk=0;
        if(ddue==0)
        {
            stk=stk+ordd;
            ordd=0;
        }
        cstk=cstk+stk;
        if(ordd==0)
        {
            if(stk<=rp)
            {
                ordd=q;
                ddue=lt;
            }
        }
        x=rand()/32768.0;
        if(x<=0.20)
            dmd=3;
        else if((x>0.2)&&(x<=0.50))
            dmd=4;
        else if((x>0.5)&&(x<=0.85))
            dmd=5;
        else
            dmd=6;
        cdmd=cdmd+dmd;
        if(dmd>stk)
            shortage=dmd-stk;
            else
                shortage=0;
            cshort=cshort+shortage;
            if(ddue>0)
                ddue=ddue-1;
    }
    s1=(cdmd-cshort)*100.0/cdmd;
    float days=tdays;
    avstk=cstk/days;
    printf("\n Average stock=%6.2f units service level=%6.2f%",avstk,s1);
}
