#include "libft.h"

int ft_char_is_space(char c)
{
  if(c == 32 || c == '\n')
    return 1;
  else
    return 0;
}

int word_counts(char *str, int word_count)
{
  char k;
  int i;
  i = 0;
  int len;
  len = ft_strlen(str);
  while(i <= len)
  {
    if(ft_char_is_space(str[i]) == 1 && ft_char_is_space(str[i + 1]) == 0 )
      word_count++;
    i++;
  }
  return word_count;
}

int ft_wordlen(char *str, int p)
{
  int count;
  count = 0;

  while(ft_char_is_space(str[p]) == 0 && str[p])
  {

    count++;
    p++;
  }
  return(count);
}

char **ft_split_whitespaces(char *str)
{
  // char *strs = *str
  // char *strm = malloc
  // while(*strs)
  int len;
  len = ft_strlen(str);
  ft_putchar(32);
  ft_putnbr(len);

  int word_count;
  word_count = 1;

  int wc;
  wc = word_counts(str, word_count);
  ft_putchar(32);
  ft_putnbr(wc);

  char **wordsarray;
  wordsarray = malloc((sizeof(char*) * wc) + 1); //sizeof(char*) = 8 bytes always, maybe 8
  wordsarray[wc] = 0;

  int i,p,k;
  i = 0;
  p = 0;

  while(p < wc)
  {
  
  }

  wordsarray[i] = NULL;
  return wordsarray;
}


int main()
{
  ft_split_whitespaces("egwre\nfv fe wefds");
  return 0;
}
