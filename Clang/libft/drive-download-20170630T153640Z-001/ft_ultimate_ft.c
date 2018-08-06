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

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}

int main()
{
  int nbr0;
  int *nbr1 = &nbr0;
  int **nbr2 = &nbr1;
  int ***nbr3 = &nbr2;
  int ****nbr4 = &nbr3;
  int *****nbr5 = &nbr4;
  int ******nbr6 = &nbr5;
  int *******nbr7 = &nbr6;
  int ********nbr8 = &nbr7;
  int *********nbr9 = &nbr8;
  ft_ultimate_ft(nbr9);
  ft_putnbr(nbr0);
  return 0;
}
