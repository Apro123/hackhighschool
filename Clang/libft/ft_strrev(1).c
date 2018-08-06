#include "libft.h"



char *ft_strrev(char *str)
{
  char *k;
  int i;
  int len;

  len = ft_strlen(str);

  i = 0;
  k = malloc(len + 1);
  k[len] = '\0';

  while (i <= len)
  {
    k[len -1 - i] = str[i];
    i++;
  }
  return k;
}

//   int len = ft_strlen(str);
//   // // ft_putnbr(len);
//   // // int i = 0;
//   // // char A[len+1];
//   // // while(i >= 0)
//   // // {
//   // //   A[len - i] = str[i];
//   // //   i--;
//   // // }
//   // // ft_putstr(A);
//   // // return A;
//   //
//   char temp;
//   char *e;
//   e = str + len - 1;
//   while(str < e)
//   {
//     temp = *str;
//     *str = *e;
//     str++;
//     e++;
//   }

int main()
{
  ft_putstr(ft_strrev("hxjthrgf"));
  return 0;
}
