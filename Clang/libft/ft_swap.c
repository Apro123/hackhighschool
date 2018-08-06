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

void ft_swap(int *a, int *b)
{
  int val_a = *a;
  int val_b = *b;
  *a = val_b;
  *b = val_a;
}

int main()
{
  int a;
  int b;
  ft_putnbr(a);
  ft_putchar(' ');
  ft_putnbr(b);
  ft_putchar(' ');
  ft_putchar(' ');
  ft_swap(&a, &b);
  ft_putnbr(a);
  ft_putchar(' ');
  ft_putnbr(b);
  return 0;
}
