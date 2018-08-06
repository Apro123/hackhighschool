#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

void ft_putnbr(int nb)
{
  if(nb < 0)
  {
    ft_putchar('-');
    nb *= -1;
  }
  if(nb > 9)
  {
    while(nb > 9)
    {
      ft_putnbr(nb/10);
      ft_putchar(48 + nb%10);
      nb = nb%10;
    }
  }
  else
  {
    nb += 48;
    ft_putchar(nb);
  }
}

void ft_putstr(char *str)
{
  while(*str != '\0')
  {
    ft_putchar(*str);
    str++;
  }
}

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i] != '\0')
    i++;
  return i;
}


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
