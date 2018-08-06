#include "libft.h"



char *ft_strstr(char *str, char *to_find)
{
  int len_find = ft_strlen(to_find);
  int len_str = ft_strlen(str);
  int i;
  i = 0;
  int p;
  int find_count;
  find_count = 0;
  int counter;
  counter = 1;
  if(len_find == 0)
    return str;
  else
  {
    while(i <= len_str)
    {
      while(str[i] == to_find[find_count])
      {
        if(counter == len_find)
        {
          if(len_find == 2)
            return NULL;
          return to_find;
        }
        counter++;
        if(str[i+1] == to_find[find_count+1])
            find_count++;
          else
            find_count = 0;
        i++;
      }
      i++;
    }
    return NULL;
  }
}


int main(int argc, char **argv)
{
  char *new;
  char *strs;
  strs = "";
  new = "pkosjh poke";
  ft_putstr(ft_strstr(new, strs));
  return 0;
}
