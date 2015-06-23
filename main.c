/*
** main.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 14:16:00 2014 thomas rieux-laucat
** Last update Sun Dec 14 22:25:57 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

int             main(int argc, char **argv)
{
  int           *arg;
  t_numbr       *l_a;
  t_numbr	*l_b;

  l_b = NULL;
  if (argc == 1)
    {
      error_msg();
      return (1);
    }
  if ((check_arg(argc, argv)) == 1)
    {
      arg = get_arg(argc, argv);
      l_a = my_params_in_list(argc, arg);
      sort_v(&l_a, &l_b);
    }
  else
    {
      arg = get_arg(argc, argv);
      l_a = my_params_in_list(argc, arg);
      sort(&l_a, &l_b);
    }
  free_list(&l_b);
  free_list(&l_a);
  free(arg);
  return (0);
}
