#include "libft.h"



char *ft_strcpy(char *dest, char *src, unsigned int n)
{
  int len = ft_strlen(src);
  int i;
  i = 0;
  while(i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return dest;
}


int main()
{
  char *new;
  char *strs;
  int ns;
  ns = 3;
  strs = "ottffssent";
  new = malloc(ns + 1);
  new[ns] = '\0';
  ft_putstr(ft_strcpy(new, strs, ns));
  return 0;
}
