/*
** list.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 11:23:30 2014 thomas rieux-laucat
** Last update Fri Dec 12 20:49:29 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

t_numbr		*my_params_in_list(int ac, int *nbr)
{
  int		i;
  t_numbr	*list;

  i = 0;
  list = NULL;
  while (i < (ac - 1))
    {
      my_put_in_list(&list, nbr[i]);
      i++;
    }
  return (list);
}

t_numbr		*last_node(t_numbr **list)
{
  t_numbr	*tmp;
  
  tmp = *list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  return (tmp);
}

void		aff_list(t_numbr *nbr)
{
  t_numbr	*tmp;

  tmp = nbr;
  while (tmp != NULL)
    {
      my_putnbr(tmp->data);
      my_putchar(' ');
      tmp = tmp->next;
    }
}

void		free_list(t_numbr **list)
{
  t_numbr	*tmp;

  while ((*list))
    {
      tmp = (*list)->next;
      free((*list));
      (*list) = tmp;
    }
}

int		my_put_in_list(t_numbr **list, int nbr)
{
  t_numbr	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->data = nbr;
  elem->next = *list;
  *list = elem;
  return (0);
}
