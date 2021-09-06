
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

  int main(void){
    int rc;
    rc = fork();
    if(rc < 0){
      printf("fork failed lmao, I think im losing my mind lol!\n");
    }else if(rc == 0 ){
      close(STDOUT_FILENO);
      printf("Hello it's me the child");
      exit(0);
    }else
      printf("Hello, waiting for my child to get done again");


   }
   /*********************************************************
    Name: Bryan Epperson
    It seems if we use the STDOUT file descriptor it will not allow us to print something on the terminal screen using the printf(),
    what's even more odd is that no error has occured so I would have to ask about this some more.

    source: http://codewiki.wikidot.com/c:system-calls:close




   **********************************************************/
