#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

int concats(int x, int y)
{
  return ((x-'0') * 10) + (y-'0');
}

void prints(int zero, int next, int final1, int final2)
{
  int x = concats(zero, next);
  int y = concats(final1, final2);
  if(x < y)
  {
    ft_putchar(zero);
    ft_putchar(next);
    ft_putchar(' ');
    ft_putchar(final1);
    ft_putchar(final2);
    if(x + y != 197)
    {
      ft_putchar(',');
      ft_putchar(' ');
    }
  }
}

void ft_print_comb2(void)
{
  int zero = 48;
  while(zero < 58)
  {
    int next = 48;
    while(next < 58)
    {
      int final1 = 48;
      while (final1 < 58)
      {
        int final2 = 48;
        while (final2 < 58)
        {
          prints(zero, next, final1, final2);
          final2++;
        }
        final1++;
      }
      next++;
    }
    zero++;
  }
  ft_putchar('\n');
}



int main()
{
  ft_print_comb2();
  return 0;
}
