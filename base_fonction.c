/*
** base_fonction.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 14:14:07 2014 thomas rieux-laucat
** Last update Tue Jun 23 18:36:42 2015 Thomas-Rieux-Laucat
*/

#include <stdlib.h>
#include "include/list.h"

int     *get_arg(int ac, char **av)
{
  int   i;
  int   j;
  int   *arg;

  i = (ac - 1);
  j = 0;
  arg = malloc(i*sizeof(int));
  while (i >= 1)
    {
      if (av[i][0] == '-' && av[i][1] == 'v')
	  i--;
      else
	arg[j++] = my_getnbr(av[i--]);
    }
  return (arg);
}

int	check_arg(int ac, char **av)
{
  int	i;

  i = 1;
  while (i != ac)
    {
      if (av[i][0] == '-' && av[i][1] == 'v')
	{
	  my_putstr("OK");
	  return (1);
	}
      i++;
    }
  return (0);
}

void	error_msg()
{
  my_putstr("Use : ./pushswap [-Option] [0 1 2 3 4 5 6 7 8 9...]\n");
  my_putstr("\nOPTION : \n");
  my_putstr("-v : display all the step for l_a and l_b.\n");
}
