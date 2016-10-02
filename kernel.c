#include <unistd.h>
#include <istdio.h>

int main(){
  int fd;
   fd = fork();
   if(fd == 0){
   printf("Child Process id = [ %d ]\n",getpid());
   }else{
   printf("Parent process id = [ %d ]\n",getppid());
   }
}
