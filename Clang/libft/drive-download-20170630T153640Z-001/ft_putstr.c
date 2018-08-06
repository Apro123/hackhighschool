#include "libft.h"

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

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

void ft_putstr(char *str)
{
  while(*str != '\0')
  {
    ft_putchar(*str);
    str++;
  }
}

// int main()
// {
//   char *x = "sthrhere";
//   ft_putstr(x);
//
//   return 0;
// }
