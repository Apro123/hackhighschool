#include <unistd.h>

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

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a/b;
  *mod = a % b;
}

int main()
{
  int a = 35;
  int b = 3;
  int divout;
  int modout;
  ft_div_mod(a, b, &divout, &modout);
  ft_putnbr(divout);
  ft_putchar(' ');
  ft_putnbr(modout);
  return 0;
}
