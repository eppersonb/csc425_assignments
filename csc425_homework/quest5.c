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
      rc_wait = wait(NULL);
      printf("Hello it's me the child (%d), pid = %d  , rc_wait  = %d\n",  getpid(),   rc_wait);
      exit(0);
    }else
      printf("Hello, waiting for my child to get done again(%d), pid = %d, rc_wait = %d\n", getpid(), rc_wait);


   }
   /**************************************************************
    Name: Bryan Epperson
    Question 5: it seems to me that the wait command returns the process id of the terminated child, if we use the wait() in the  
    child instead of the parent than we seem to get a -1 as there is no child of a child so it cant really wait for anything. 




   ***************************************************************/
