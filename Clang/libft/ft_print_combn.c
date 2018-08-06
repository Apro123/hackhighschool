#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

int twoandmore(int zero)
{
  int first = 48;
  while(first < 58)
  {
    ft_putchar(zero);
    ft_putchar(first);
    ft_putchar(',');
    ft_putchar(' ');
    first++;
  }
  return 0;
}

void ft_print_combn(int n)
{
  int zero = 48;
  if(n > 1)
  {
// pass an address through
  }
  else
  {
    while(zero < 58)
    {
      ft_putchar(zero);
      ft_putchar(',');
      ft_putchar(' ');
      zero++;
    }
  }
}

// void ft_print_combn(int n)
// {
//   if(n >= 1)
//   {
//     int zero = 48;
//     while(zero < 58)
//     {
//       if(n >= 2)
//       {
//         int next1 = 48;
//         while(next1 < 58)
//         {
//           if(n >= 3)
//           {
//             threeand()
//           }
//           else
//           {
//             if(next1 > zero)
//             {
//               ft_putchar(zero);
//               ft_putchar(next1);
//               ft_putchar(',');
//               ft_putchar(' ');
//             }
//           }
//           next1++;
//         }
//       }
//       else
//       {
//         ft_putchar(zero);
//         ft_putchar(',');
//         ft_putchar(' ');
//       }
//       zero++;
//     }
//   }
//   ft_putchar('\n');
// }

int main()
{
  ft_print_combn(1);
  // ft_print_combn(2);
  // ft_print_combn(3);
  return 0;
}
