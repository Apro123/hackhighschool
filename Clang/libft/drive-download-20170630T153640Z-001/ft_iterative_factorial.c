#include "libft.h"




int ft_interative_factorial(int nb)
{
  if(nb == 1)
    return 1;
  else
  {
    int new_nb;
    new_nb = nb * (nb-1);
    while(nb != 2)
    {
      nb--;
      new_nb = new_nb * (nb-1);
    }
    return new_nb;
  }
}


int main()
{
  ft_putnbr(ft_interative_factorial(2));
  return 0;
}

















// int ft_putchar(char c)
// {
//   write(1, &c, 1);
//   return 0;
// }
//
// void ft_putnbr(int nb)
// {
//   if(nb < 0)
//   {
//     ft_putchar('-');
//     nb *= -1;
//   }
//   if(nb > 9)
//   {
//     while(nb > 9)
//     {
//       ft_putnbr(nb/10);
//       ft_putchar(48 + nb%10);
//       nb = nb%10;
//     }
//   }
//   else
//   {
//     nb += 48;
//     ft_putchar(nb);
//   }
// }
//
// void ft_putstr(char *str)
// {
//   while(*str != '\0')
//   {
//     ft_putchar(*str);
//     str++;
//   }
// }
//
// int ft_strlen(char *str)
// {
//   int i = 0;
//   while(str[i] != '\0')
//     i++;
//   return i;
// }
//
// char *ft_strrev(char *str)
// {
//   char *k;
//   int i;
//   int len;
//
//   len = ft_strlen(str);
//
//   i = 0;
//   k = malloc(len + 1);
//   k[len] = '\0';
//
//   while (i <= len)
//   {
//     k[len -1 - i] = str[i];
//     i++;
//   }
//   return k;
// }
