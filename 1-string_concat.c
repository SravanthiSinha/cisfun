#include <stdlib.h>

/* a fucntion to get the length of input string*/
int str_len(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0')
    {
      i++;
    }  
  return i;
}



/*a function that concatenates two strings.*/
char *string_concat(char *s1, char *s2)
{

  int l1;
  int l2;
  int i;
  int j;
  char *concat;
  
  l1 =str_len(s1);
  l2 =str_len(s2);
  concat = malloc((l1+12+1)* sizeof(char));
  
  if(concat == NULL)
    return NULL;
  for(i = 0 ;i <l1;i++)
    concat[i]=s1[i];
  for(j = 0 ;j <l2;j++)
    concat[i+j]=s2[j];

  return concat;
  
}
