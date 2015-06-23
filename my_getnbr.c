/*
** my_getnbr.c for Pushswap in /home/rieux-_t/Documents/Github/CPE_2014_Pushswap
** 
** Made by Thomas-Rieux-Laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Jun 23 18:44:22 2015 Thomas-Rieux-Laucat
** Last update Tue Jun 23 18:44:23 2015 Thomas-Rieux-Laucat
*/

int	my_getnbr(char *str)
{
  int	nb;
  int	signe;
  int	pos;

  nb = 0;
  pos = 0;
  signe = 1;
  while (str[pos] == '-')
    {
      signe = signe * -1;
      pos = pos + 1;
    }
  while (str[pos] != '\0')
    {
      if (str[pos] < '0' || str[pos] > '9')
	return (nb * signe);
      nb = nb * 10 + (str[pos] - '0');
      pos = pos + 1;
    }
  return (nb * signe);
}
