#include "libft.h"


int ft_poweroften(int pows)
{
  int real_power;
  real_power = 1;
  if(pows != 0)
  {
      while(pows > 0)
    {
      real_power = 10 * real_power;
      pows--;
    }
    return real_power;
  }
  else
  {
    return 1;
  }
}

int ft_atoi(char *str)
{
  int len;
  char num;
  int power;
  power = 0;
  int i;
  i = 0;
  int total;
  total = 0;

  char *reverse;
  len = ft_strlen(str);
  reverse = ft_strrev(str);


  while (len != 0)
  {
    num = reverse[i] - 48;

    num = (ft_poweroften(power)) * num;
    power++;
    len--;
    i++;
    total += num;
  }
  return total;
}

int main()
{
  // ft_putnbr(ft_atoi("48"));
  ft_putnbr(ft_atoi("123"));
  return 0;
}
