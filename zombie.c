#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		printf("PID filho: %d\n", getpid());
		printf("PID pai: %d\n", getppid());

	}
	else
	{
		printf("PID pai: %d\n", getpid());
		printf("PID filho: %d\n", pid);
	}

	return 0;
}


