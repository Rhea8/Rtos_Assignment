#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char*argv[])
{
char v;
int ret_value;
printf("Argc: %d \n", argc);
printf("Enter one alphabet \n");
printf("Parent process id of the current process: %d\n",getppid());
printf("The current parent process: %d\n",getpid());
printf("Creating a Child process\n");
ret_value = fork();
    
if(ret_value < 0)
{
printf("Child process not created\n");
}
else if(ret_value == 0)
{
printf("Inside Child Process\n");
printf("The child process id: %d\n",getpid());
printf("The parent pid of child process %d is %d \n",getpid(),getppid());
if(argc==2)
{
v=argv[1];
if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
{
printf("Its a vowel \n");
}
else
printf("Its a Consonant\n");
}}
}
