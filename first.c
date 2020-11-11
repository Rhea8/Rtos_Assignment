#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
int i,r=0, sum=0,low, high,num;
printf("Argc: %d \n",argc);
if(argc==3)
{
low=atoi(argv[1]);
high=atoi(argv[2]);

for(i=low;i<=high;i++)
{
r=low%10;
sum=sum+r;
low=low/10;
}
if(sum==8)
{
printf("%d", low);
}
else
printf("None");
}}
