#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
printf("we are in exec1.c\n");
printf("pid of exec1.c=%d\n",getpid());
return 0;
}
