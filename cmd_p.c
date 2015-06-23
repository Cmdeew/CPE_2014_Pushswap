/*
** cmd_p.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Fri Dec 12 15:52:54 2014 thomas rieux-laucat
** Last update Sun Dec 14 22:48:50 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

int     cmd_pb(t_numbr **a, t_numbr **b)
{
  int   val;

  if ((*a) == NULL)
    return (1);
  val = 0;
  val = pop(a);
  my_put_in_list(b, val);
  my_putstr("pb ");
  return (0);
}

int     cmd_pa(t_numbr **a, t_numbr **b)
{
  int   val;

  if ((*b) == NULL)
    return (1);
  val = 0;
  val = pop(b);
  my_put_in_list(a, val);
  my_putstr("pa ");
  return (0);
}
