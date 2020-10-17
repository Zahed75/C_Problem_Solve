#include<stdio.h>
#include<math.h>
main(){
   int i,k,n,m,pct,count,crt[50];
   int eot[50],lot[50],est[50],eft[50],lst[50],lft[50],list[50],slack[50];

   int snode,fnode;

   int s[] = {0,1,1,2,2,2,3,3,4,4,5,5,6,7,7,8,9};
   int f[] = {0,2,3,3,4,6,4,5,6,7,7,9,7,8,9,10,10};
   int t[] = {0,8,12,6,10,12,7,9,4,11,6,7,5,8,4,5,3};

   printf("\n The Number Of node(m): ");
   scanf("%d",&m);
   n=16;m=10;
   printf("N=%d  M=%d",n,m);
   printf("\n");

   for(i=1;i<=n;i++){

   }
   for(i=1;i<=m;++i){
    eot[i] = 0;
   }
   printf("\n S[i] F[i] T[i] EST[i] EFT[i]");

   for(i=1;i<=n;i++){
     snode = s[i];
     fnode = f[i];
     est[i] = eot[snode];
     eft[i] = est[i]+t[i];
     printf("\n %d %d %d %d %d",snode,fnode,t[i],est[i],eft[i]);
     if(eft[i]>eot[fnode]) eot[fnode] = eft[i];
   }
   pct = eot[m];
   printf("\n pct=%d",pct);

   printf("\n S[i] F[i] T[i] EST[i] EFT[i] ECT[i] LCT[i]");
   for(i=1;i<=m;++i){
     lot[i] = pct;
   }
   for(i=n;i>=1;--i){
     snode = s[i];
     fnode = f[i];

     lft[i] = lot[fnode];
     lst[i] = lft[i]-t[i];
     printf("%5 %6 %6 %6 %6 %6 %6",snode,fnode,t[i],est[i],eft[i],lst[i],lft[i]);
     if(lst[i]<lot[snode]) lot[snode]=lst[i];
   }
   k=1;
   for(i=1;i<=n;++i){
    if(lst[i]==est[i]) crt[i]=1,list[k]=i,k=k+1;
    else crt[i] = 0;
   }
   printf("\n I S[i] F[i] EST[i] EFT[i] ECT[i] LCT[i] CRT[i] ");
   for(i=1;i<=n;++i){
     printf("\n %3d %4d %6d %6d %6d %6d %6d %6d %6d ", i,s[i],f[i],t[i],est[i],eft[i],lst[i],lft[i],crt[i]);
   }
   printf("\n Critical actvites are ");
   for(i=1;i<=k-1;++i){
     printf("%4d",list[i]);
   }

   for(k=1;k<=m;++k){
     slack[k] = lst[k]- est[k];
   }
   printf("\n Node ");

   for(k=1;k<=m;++k){
     printf("%3d",k);
   }

   printf("\n Slack");

   for(k=1;k<=m;++k){
      printf("%3d",slack[k]);
   }

}
