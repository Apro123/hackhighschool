#include <unistd.h>
#include <stdlib.h>


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

void ft_putstr(char *str)
{
  while(*str != '\0')
  {
    ft_putchar(*str);
    str++;
  }
}

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i] != '\0')
    i++;
  return i;
}

char *ft_strrev(char *str)
{
  char *k;
  int i;
  int len;

  len = ft_strlen(str);

  i = 0;
  k = malloc(len + 1);
  k[len] = '\0';

  while (i <= len)
  {
    k[len -1 - i] = str[i];
    i++;
  }
  return k;
}

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
