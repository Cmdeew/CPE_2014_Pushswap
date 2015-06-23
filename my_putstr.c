/*
** my_putstr.c for  in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 12:05:29 2014 thomas rieux-laucat
** Last update Fri Dec 12 20:51:17 2014 thomas rieux-laucat
*/

#include <unistd.h>
#include "include/list.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
