#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
    int rc;
    char  fileOpen = open("myFile.txt", O_CREAT | O_WRONLY| O_APPEND);
     
     rc = fork(); 
    if (rc < 0){
        printf("failed to fork\n");

     }else if(rc == 0){
        printf("File has been created!");
	exit(0);
     }else{
        printf("Hello I'm the parent waiting on the child to open the file\n");
     }
	
      return 0;
     }
/*******************************************************

Name: Bryan Epperson
Question 2: I feel like both the child and parent can have access to the file as the child is the exact copy of the parent.
However I think when both the child and the parent are trying to overwrite the file the order that they do so will be undetermistice
as there is no wait() command so one may overwrite the other but I dont think it can be determined on who will overwrite the other in
this case.




*******************************************************/
