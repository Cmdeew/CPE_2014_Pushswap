/*
** commande.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 16:36:56 2014 thomas rieux-laucat
** Last update Tue Jun 23 18:36:27 2015 Thomas-Rieux-Laucat
*/

#include <stdlib.h>
#include "include/list.h"

int		list_check_a(t_numbr **list)
{
  t_numbr	*tmp;

  if(*list == NULL)
    return (1);
  tmp = *list;
  while (tmp->next)
    {
      if (tmp->data <= tmp->next->data)
	{
	  tmp = tmp->next;
	}
      else
	return (1);
    }
  return (0);
}

int	list_check_b(t_numbr **list)
{
  t_numbr	*tmp;

  if (*list == NULL)
    return (1);
  tmp = *list;
  while (tmp->next)
    {
      if (tmp->data >= (tmp->next)->data)
	tmp = tmp->next;
      else
	return (1);
    }
  return (0);
}

int		pop(t_numbr **list)
{
  t_numbr	*tmp;
  int		val;

  val = 0;
  if (!*list)
    return (1);
  tmp = (*list)->next;
  val = (*list)->data;
  free(*list);
  *list = tmp;
  return (val);
}
