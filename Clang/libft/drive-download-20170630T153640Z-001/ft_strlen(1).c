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

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i] != '\0')
    i++;
  return i;
}

int main()
{
  int i;
  char *x = "sthrhere";
  ft_putnbr(ft_strlen(x));

  return 0;
}
