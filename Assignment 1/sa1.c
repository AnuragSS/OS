#include<stdio.h>
#include<sys/types.h>
void ChildProcess();
void ParentProcess();
int main(){
	pid_t pid;
	pid=fork();
	if(pid == 0){
		printf("the process id is %d\n",pid);
		ChildProcess();
	}
	else{
		printf("the process id is %d\n",pid);
		ParentProcess();
	}
}

void ChildProcess(){
	printf("I am child process\n");
}

void ParentProcess(){
	printf("I am parent process\n");
}

