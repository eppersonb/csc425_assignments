#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

  int main(void){
    int rc,rc_wait, pid;
    rc = fork();
    if(rc < 0){
      printf("You know how this goes, this means the fork has failed, hahahahaha!\n");
    }else if(rc == 0 ){
      printf("Hello it's me the child (%d), pid = %d  , rc_wait  = %d\n",  getpid(),   rc_wait);
      exit(0);
    }else
      rc_wait = waitpid(rc, NULL, 0);
      printf("Hello, waiting for my child to get done again(%d), pid = %d, rc_wait = %d\n", getpid(), rc_wait);


   }
    /******************************************************************************
     Name: Bryan Epperson
     Question 6: you would use a waitpid to have a child or to be specific a child process to get done so we dont have
     to wait for all the child processes to get done. This should allow you to have a little more control in what you want done in 
     the system. 




    *******************************************************************************/
