#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum=0,get=0;
for(i=1;i<=15;i++)
{
sum=sum+i;
printf("%d",sum);
}
for(j=15;j<=45;j++)
{
if(j%2!=0)
{
get=get+j;
printf("%d",get);
}}
getch();
}
