#include<stdio.h>

/*
A program that prints all arguments it receives.
 */

int main(int argc, char * argv[])
{
  int i;

  i = 0;
  
  /*All arguments are  printed, including argv[0]*/
  for(i = 0 ; i< argc; i++)
    printf("%s\n",argv[i]);
  return (0);
}
