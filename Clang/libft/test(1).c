#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

int main()
{
  ft_putchar('W');
  ft_putchar('H');
  ft_putchar('A');
  ft_putchar('T');
  ft_putchar('\n');
  ft_putchar('M');
  ft_putchar('A');
  ft_putchar('N');
  ft_putchar('\n');
  return 0;
}
