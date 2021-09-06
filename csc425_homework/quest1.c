#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main(void){
   int x = 100;
   int rc = fork();
   if (rc < 0){
     // fork failed
     fprintf(stderr, "forkfailed\n");
     exit(1);
    } else if (rc == 0){
      x = 24; 
      printf("I am a child and I have this number %d\n ", x);
      exit(0);
    } else {
        x = 5;  // this parent should have a new differnt from the child
        printf("I am the parent of this program and I have this number %d\n", x);

      }


/*************************************

Name: Bryan Epperson
Question 1: So what it seems to me is that he variable in the child process will be the one I set it to which was 24. What seems
to be happening at least to me since the child runs first the variable that was originally in main was 100 and since the child
ran it is now at 24. Now the Parent can run since the child is done and it will now have the value of 5. It seems that both the 
parent and child do not  seem to interfere with eachother.


*************************************/




}
