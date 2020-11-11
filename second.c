#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int pid, pid1,pid2;
pid=fork();
if(pid==0)
{
sleep(3);
printf("Parent Id:%d Child1 Id:%d \n", getppid(), getpid());
}
else
{
pid1=fork();
if(pid1==0)
{
sleep(2);
printf("Parent Id:%d Child2 Id:%d \n", getppid(), getpid());
}
else
{
pid2=fork();
if(pid2==0)
{
printf("Parent Id:%d Child3 Id:%d \n", getppid(), getpid());
}
else
{
sleep(3);
printf("Parent Id:%d\n", getpid());
}
}
}
return 0;
}
