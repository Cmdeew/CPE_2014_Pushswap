/*
** cmd_s.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Fri Dec 12 14:22:49 2014 thomas rieux-laucat
** Last update Sun Dec 14 22:48:03 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

int             cmd_sa(t_numbr **list)
{
  int           nb;

  if ((*list) == NULL || (*list)->next == NULL)
    return (1);
  else
    {
      nb = (*list)->data;
      (*list)->data = (*list)->next->data;
      (*list)->next->data = nb;
    }
  my_putstr("sa ");
  return (0);
}

int             cmd_sb(t_numbr **list)
{
  int           nb;

  if ((*list) == NULL || (*list)->next == NULL)
    return (1);
  else
    {
      nb = (*list)->data;
      (*list)->data = (*list)->next->data;
      (*list)->next->data = nb;
    }
  my_putstr("sb ");
  return (0);
}

int	cmd_ss(t_numbr **a, t_numbr **b)
{
  cmd_sa(a);
  cmd_sb(b);
  my_putstr("ss ");
  return (0);
}
