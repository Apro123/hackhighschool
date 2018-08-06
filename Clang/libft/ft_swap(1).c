#include "libft.h"

void ft_swap(int *a, int *b)
{
  int val_a = *a;
  int val_b = *b;
  *a = val_b;
  *b = val_a;
}
