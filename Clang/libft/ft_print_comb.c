#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

void ft_print_comb(void)
{
  int zero = 48;
  while(zero < 58)
  {
    int next = 48;
    while(next < 58)
    {
      int final = 48;
      while (final < 58)
      {
        ft_putchar(zero);
        ft_putchar(next);
        ft_putchar(final);
        if(zero + next + final != 171)
        {
          ft_putchar(',');
          ft_putchar(' ');
        }
        final++;
      }
      next++;
    }
    zero++;
  }
  ft_putchar('\n');
}

int main()
{
  ft_print_comb();
  return 0;
}
