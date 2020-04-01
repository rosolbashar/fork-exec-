#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
printf("pid of exec.c=%d\n",getpid());
char *args[]={"HELLO","Welcome","rosol",NULL};
execv("./exec1",args);
printf("back to exec.c");
return 0;


}
