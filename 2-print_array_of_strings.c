/*a function that prints the content of an array of strings*/
#include<stddef.h>
#include<unistd.h>

int print_char(char c)
{
  return (write(1,&c,1));
}

void print_string(char *s)
{
  int i;

  i = 0;
  
  while(s[i]!='\0')
    {
      print_char(s[i]);
      i++;
    }
}
  


void print_array_of_strings(char **a)
{
  int i;
  
  i = 0;

  while(a[i]!= NULL)    
    {
      print_string(a[i]);      
      if(a[i+1] != NULL)
      print_char(' ');
      i++;
    }
  if (i > 0)
    print_char('\n');
  
}