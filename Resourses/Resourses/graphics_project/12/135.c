#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
   float r,iat,clock,nat,it1,it2,run=150.,cit1=0.,cit2=0.;
   float mean=3.,lemda1=5.,lemda2=4.,se1=0.,se2=0.;
   int k,q=0,qmax=3,kont,counter;
   printf("\n Clock IAT NAT SE1 SE2 QUE Kont cit1 cit2");

   r = rand()/32768.;
   iat = (-mean)*log(1-r);
   nat =  nat +iat;se1=lemda1;counter=1;

   printf("\n %6.2f %6.2f %6.2f %6.2f %6.2f %6.2f %d %6.2f %6.2f",clock,iat,nat,se1,se2,q,kont,clock,cit2);

   while(clock <= run ){
    if(nat<=se1 &&  nat<=se2){
     clock = nat;q=q+1;
     r = rand()/32768.;
     iat = (-mean)*log(1-r);
     nat = nat+iat;counter=counter+1;}
     else if(se1<=nat && se1 <=se2) clock=se1;
        else clock=se2;

     if(q>qmax){kont=kont+1;
     q = q-1;}

    if(q>=1 && se1 <= clock){
        it1=clock-se1;cit1=cit1+it1;
        se1 = clock+lemda1;
        q=q-1;
    }
    if(q>=1 && se2 <= clock){
        it2=clock-se2;cit2=cit2+it2;
        se2 = clock+lemda2;
        q=q-1;
    }
    if(q==0 && se1 <= clock){
       clock=nat;it1=clock-se1;cit1=cit1+it1;
       se1=nat+lemda1;
       r = rand()/32768.;
       iat = (-mean)*log(1-r);
       nat = nat+iat;
       counter = counter+1;
    }
    if(q==0 && se2<=clock){
        clock = nat;it2=clock-se2;cit2=cit2+it2;
        se2=nat+lemda2;
        r = rand()/32768.;

        iat = -mean*log(1-r);
        nat = nat+iat;
        counter=counter+1;
    }
    printf("\n %6.2f %6.2f %6.2f %6.2f %6.2f %d  %d  %6.2f %6.2f",clock,iat,nat,se1,se2,q,kont,cit1,cit2);
    printf("\n clock = %8.2f cit1=%6.2f cit2=%6.2f counter=%d",clock,cit1,cit2,counter);
    printf("\n \n queuing system : M/D/2/3");
    printf("\n\n mean arival time=%5.2f minutes exponentially distributed",mean);
    printf("\n Service time server I=%5.2f minutes Server II = 5.2f minutes",lemda1,lemda2);
    printf("\n Simulation Run(Elapsed time)=7.2f minutes",clock);
    printf("\n Number of coustomer arival=%d",counter);
    printf("\n Number of coustomer returnd without service=%d",kont);
    printf("\n idle time of server I = %6.2f minutes",cit1);
    printf("\n idle time of server I = %6.2f minutes",cit2);

    printf("\n percentage idle time of server I = %6.2f %",cit1*100./clock);

    printf("\n percentage idle time of server II = %6.2f %",cit2*100./clock);

    printf("\n Any Digit");

    scanf("%d",&k);


   }
}
