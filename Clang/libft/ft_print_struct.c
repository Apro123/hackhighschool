#include "libft.h"
#include "ft_putnbr(1).c"
#include "ft_putchar(1).c"

int main()
{
  t_fun *kapoor;
  kapoor = malloc(sizeof(t_fun));
  kapoor->v = 42;
  ft_putnbr(kapoor->v);
  return 0;
}
