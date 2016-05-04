#include<unistd.h>

/*
  a fucntion to write a character to display
*/  
int print_char( char c)
{
  return write(1,&c,1);
}

/*
A program that prints all arguments it receives.
 */

int main(int argc, char * argv[])
{
  int i;
  int j;

  i = 0;
  
  /*All arguments are  printed, including argv[0]*/
  for(i = 0 ; i< argc; i++)    
    {
      j = 0;
      while(argv[i][j]!='\0')
	{
	  print_char(argv[i][j]);
	  j++;
	}

      print_char('\n');
    }
  return (0);
}
