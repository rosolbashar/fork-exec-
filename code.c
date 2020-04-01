#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
 printf("hello world\n pid=%d \n",getpid());
if(fork()==0){
printf("Iam rosol bashar\n pid=%d \n",getpid());
if(fork()==0)
{
printf(" Iam student in unvirsity of karbala\n pid=%d \n",getpid());
}
}
printf("bye\n pid=%d \n",getpid());

return 0;
}
