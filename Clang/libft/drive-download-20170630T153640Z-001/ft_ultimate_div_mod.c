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

void ft_ultimate_div_mod(int *a, int *b)
{
  *a = *a / *b;
  *b = *a % *b;
}

int main()
{
  int a_0 = 35;
  int b_0 = 3;
  ft_ultimate_div_mod(&a_0, &b_0);
  ft_putnbr(a_0);
  ft_putchar(' ');
  ft_putnbr(b_0);
  return 0;
}
