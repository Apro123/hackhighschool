#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

void ft_print_reverse_alphabet(void)
{
  int a = 122;

  while(a > 96) {
    ft_putchar(a);
    a--;
  }
  ft_putchar('\n');
}

int main()
{
  ft_print_reverse_alphabet();
  return 0;
}
