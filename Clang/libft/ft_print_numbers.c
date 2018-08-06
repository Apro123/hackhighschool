#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

void ft_print_numbers(void)
{
  int a = 48;

  while(a < 58) {
    ft_putchar(a);
    a++;
  }
  ft_putchar('\n');
}

int main()
{
  ft_print_numbers();
  return 0;
}
