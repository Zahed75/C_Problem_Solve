#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int k,up=999,down=777,dup=888,ddown=666;
int b1=0,b2=0,b3=0,maxb1=1,maxb2=1,maxb3=1;
long int cb1=0,cb2=0,cb3=0;
int sheet1=500,sheet2=400,sheet3=750,sheet4=500;
int stage1=22,stage2=22,stage3=22,stage4=22;
int counter=0, shear=up,punch=up,form=up,bend=up,shdie=dup,
punchdie=dup,formdie=dup,bendie=dup;
float r,kont,clock,run,delt,rt,ttr1,ttr2,ttr3,ttr4;
float ut=0.,ttf1,ttf2,ttf3,ttf4,ttcd1,ttcd2,ttcd3,ttcd4;
float sel=4.0,se2=5.0,se3=5.0,se4=6.0;
clock=0.; delt=1.0; kont=0.;

printf("\nLength of run=");
scanf("%f", &run);
r=rand()/32768.; ttf1=100.*log(1-r);
r=rand()/32768.; ttf2=90.*log(1-r);
r=rand()/32768.; ttf3=180.*log(1-r);
r=rand()/32768.; ttf4=240.*log(1-r);

while (clock<=run)
{
if (shear==up && ttf1<=clock)
{
shear=down;
r=rand()/32768.;
rt=3.+10.*r; ttr1=clock+rt;}
else if (shear==down && ttr1<=clock)
{
shear=up;
r=rand()/32768.;
ut=-100.*log(1-r);
ttf1=clock+ut;
}
if(shdie==dup && sheet1<=0)
{
shdie=ddown;
ttcd1=clock+25.;}
else if(shdie==ddown && ttcd1<=clock)
{
shdie=dup;
sheet1=500;
}
if (b1<maxb1 && shear==up && shdie==dup)
{
if(sel<=clock && b1<=maxb1)
{
b1=b1+1;
sel=clock+4.5;
sheet1=sheet1-1;
}
}
if (punch==up && ttf2<=clock)
{
punch=down;
r=rand()/32768.;
rt=5.+10.*r; ttr2=clock+rt;}
else if (punch==down && ttr2<=clock){
punch=up;
r=rand()/32768.;
ut=-90.*log(1-r);
ttf2=clock+ut;}
if(punchdie==dup && sheet2<=0){
punchdie=ddown;
ttcd2=clock+25.;}
else if (punchdie==ddown && ttcd2<=clock){
punchdie=dup;
sheet2=400;}
if (b2<maxb2 && b1>0 && punch==up && punchdie==dup) {
if(se2<=clock && b2<=maxb2) {
b2=b2+1;	b1=b1-1;
se2=clock+5.5; sheet2-1;}}
if(form==up && ttf3<=clock)
{
form=down;
r=rand()/32768.;
rt=4.+10.*r;ttr3=clock+rt;}
else if(form==down && ttr3<=clock)
{
form=up;
r=rand()/32768.;
ut=-180.*log(1-r);
ttf3=clock+ut;}
if(formdie==dup && sheet3<=0)
{
formdie=ddown;
ttcd3=clock+25.;}
else if (formdie==ddown && ttcd3<=clock)
{
formdie=dup;
sheet3=750;}
if (b3<maxb3 && b2>0 && form==up && formdie==dup){
if(se3<=clock && b3<=maxb3){
b3=b3+1;
b2=b2-1;
se3=clock+5.8;sheet3=sheet3-1;}}
if (bend==up && ttf4<=clock) {
bend=down;
r=rand()/32768.;
rt=15.+10.*r; ttr4=clock+rt;}
else if (bend==down && ttr4 <=clock) {
bend=up;
r=rand () /32768.;
ut=-240.*log(1-r);
ttf4=clock+ut;}
if(bendie==dup && sheet4<=0){
bendie=ddown;
ttcd4==clock+25.;}
else if (bendie==ddown && ttcd4<=clock){
bendie=dup;
sheet4=600;}
if(b3>0 && bend==up && bendie==dup) {
if (se4<=clock) {
counter=counter+1;
b3=b3-1;
se4=clock+6.2;  sheet4=sheet4-1;}}
cb1+=b1;  cb2+b2;  cb3+=b3;  kont=kont+1;
clock=clock+delt;}
printf("\n %5d %5d %5d %5d %5d %5d %5d %5d",b1,b2,b3,sheet1,sheet2,sheet3,sheet4);

printf("\n clock=%6.1f counter=%d",run, counter);
printf ("\n Av. buffer1=%6.2f Av.buffer2=%6.2f Av.buffer3=%6.2f",
cb1/kont,cb2/kont,cb3/kont);
printf("\n Throughput rate=%6.2f per hour",counter*60./ clock);
}









