# infra.-Sofware
# Bibliotecas

#include <stdio.h>
#include <unistd.h> //fork
#include <sys/types.h> // pid_t

int main(void){
    pid_t pid; //variável pra receber o PID - int 

    pid = fork(); // função cria o filho

    if (pid == 0){ //comando para o filho
        printf("PID filho: %d\n", getpid());
        printf("PID pai: %d\n", getppid());
    }

    else{ //comando para o pai
        printf("PID pai: %d\n", getpid());
        printf("PID filho: %d\n", pid);
    }
    
    return 0;
}
