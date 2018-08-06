#include "libft.h"



char *ft_strcpy(char *dest, char *src)
{
  int len = ft_strlen(src);
  int i;
  i = 0;
  while(i <= len)
  {
    dest[i] = src[i];
    i++;
  }
  return dest;
}


int main()
{
  char *string;
  char *new;
  char *strs;
  strs = "wrtgbertb";
  int len = ft_strlen(strs);
  new = malloc(len + 1);
  new[len] = '\0';
  ft_putstr(ft_strcpy(new, strs));
  return 0;
}
