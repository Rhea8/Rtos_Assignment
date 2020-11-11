#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char*argv[])
{
int r, pid;
printf("Parent process id of the current process: %d\n",getppid());
printf("The current parent process: %d\n",getpid());
printf("Creating a Child process\n");
pid=fork();
if(pid==0)
{
printf("Inside Child Process\n");
r=system("ls -l");
return r;
}
}
