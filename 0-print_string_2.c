int print_char(char);

/* a function that prints one char out of 2 of a string.*/
void print_string_2(char *str)
{
  int i;

  i = 0;

  while(str[i]!='\0')
    {
      if ( i%2 == 0)
      print_char(str[i]);
      i++;
    }

}
