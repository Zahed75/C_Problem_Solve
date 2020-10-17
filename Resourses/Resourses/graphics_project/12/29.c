#include<stdio.h>
#include<math.h>

int main()
{
    FILE *in;
    in=fopen("test.txt","w");
    int t,j;
    float tlimit=12.0;
    float a,b,x,y;
    float xf[20], yf[20], dist;
    float s=20.0;
    float xb[]={100.,110.,120.,129.,140.,149.,158.,168.,179.,188.,198.,209.,219.,226.,234.,240.};
    float yb[]={0.,3.,6.,10.,15.,20.,26.,32.,37.,34.,30.,27.,23.,19.,16.,14.};
    xf[0]=0.0;
    yf[0]=60.0;
    for(t=0;t<=12;++t)
    {
        dist=sqrt(pow(yb[t]-yf[t],2)+pow(xb[t]-xf[t],2));
        fprintf(in,"\n %d,%f",t,dist);
        if(t>tlimit)
            printf("\n Target escapes");
        if(dist<=10)
            break;
        else
        {
            xf[t+1]=xf[t]+s*(xb[t]-xf[t])/dist;
            yf[t+1]=xf[t]+s*(yb[t]-yf[t])/dist;
        }
    }
    fprintf(in,"\n value of s: ");
    scanf("%f",&s);
    fclose(in);
}
