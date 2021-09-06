#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



  int main(void){
    int rc = fork();
    char * args[] = {"ls", "-l", NULL};
    char * env[]  = {};
    if(rc < 0) {
       printf("Dang... the fork failed again... what a shame...\n");

    } else if(rc == 0) {
        execl("/bin/ls", "ls", "-l", (char *) 0);
        execv("/bin/ls", args);
        execle("/bin/ls", "ls", "-l", (char *) 0, env);
        execve("/bin/ls", args, env);
        execlp("ls", "ls", "-l", (char *) 0, env);
        execvp("ls", args);
    }else{
      sleep(5);
      printf("Hello, yeah it's me the parent again, just waited for my child to get done... yep waiting here\n");
      

    }
    return 0;
  }

 /********************************************************************
  Name: Bryan Epperson
  question 4: I think the reason there is so many variants for exec() is that they each have a specific purpose.
  like execl is executing a list to execute a file and execle is executing a file with an enviroment like the chef example to class. 
  and the p at the end of execlp is executing a file in the path. from my understanding execv is executing a program or a vector. 
  exectvp is executing a program witha path in mind. 

  Sources: https://man7.org/linux/man-pages/man3/exec.3.html
           https://stackoverflow.com/questions/14301407/how-does-execvp-run-a-command

 *********************************************************************/
