#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

   int main(void) {
     int rc;
     rc = fork();

     if (rc < 0){
       printf("fork failed\n"); 
     
     } else if(rc == 0){
       printf("Hello i'm the child!\n");
       exit(0);

     } else {
        sleep(3);
        printf("Goodbye my child I love you as a parent, please take care!\n");
     }
     return 0;
     /****************************************
      Name: Bryan Epperson
      Question 3: Yes, you can have the child print before the paret prints with the sleep() function.
      I remember in Python there was a sleep command and I remember in c++ there was a sleep command so I figured c should
      have that command. Low and behold stack overflow helped with this one.

      source: https://stackoverflow.com/questions/10922900/is-it-possible-to-wait-a-few-seconds-before-printing-a-new-line-in-c



     *****************************************/

}

