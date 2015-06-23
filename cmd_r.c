/*
** cmd_r.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Fri Dec 12 15:56:19 2014 thomas rieux-laucat
** Last update Sun Dec 14 22:48:23 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

int             cmd_ra(t_numbr **list)
{
  t_numbr       *tmp;
  t_numbr       *elem;
  int           val;

  val = pop(list);
  if ((*list) != NULL)
    {
      tmp = (*list);
      while (tmp->next != NULL)
        {
          tmp = tmp->next;
        }
      elem = malloc(sizeof(*elem));
      if (elem == NULL)
        return (1);
      tmp->next = elem;
      elem->data = val;
      elem->next = NULL;
    }
  my_putstr("ra ");
  return (0);
}

int             cmd_rb(t_numbr **list)
{
  t_numbr       *tmp;
  t_numbr       *elem;
  int           val;

  val = pop(list);
  if ((*list) != NULL)
    {
      tmp = (*list);
      while (tmp->next != NULL)
        {
          tmp = tmp->next;
        }
      elem = malloc(sizeof(*elem));
      if (elem == NULL)
        return (1);
      tmp->next = elem;
      elem->data = val;
      elem->next = NULL;
    }
  my_putstr("rb ");
  return (0);
}

void	cmd_rr(t_numbr **a, t_numbr **b)
{
  cmd_ra(a);
  cmd_rb(b);
  my_putstr("rr ");
}
