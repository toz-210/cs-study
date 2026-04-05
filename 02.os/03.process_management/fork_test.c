#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{

	int pid=fork();

	if(pid<0)
	{
		exit(-1);
	}
	else if(pid==0)
	{
		printf("child\n");
		exit(0);
	}
	else
	{
		
		printf("parent\n");
		wait(NULL);
	}

	return 0;
}
