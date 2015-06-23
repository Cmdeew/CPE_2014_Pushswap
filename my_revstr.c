/*
** my_revstr.c for my_revstr.c in /home/rieux-_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Rieux-Laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Oct  8 15:31:52 2014 Thomas Rieux-Laucat
** Last update Fri Dec 12 20:53:25 2014 thomas rieux-laucat
*/

#include "include/list.h"

char	*my_revstr(char *str)
{
  int	i;
  int   k;
  int	len;
  char	a;

  a = 0;
  i = 0;
  len = (my_strlen(str) - 1);
  k = len / 2;
  while (i != k)
    {
      a = str[i];
      str[i] = str[len];
      str[len] = a;
      i = i + 1;
      len = len -1;
    }
  return str;
}
