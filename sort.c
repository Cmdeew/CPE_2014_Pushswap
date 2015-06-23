/*
** tri.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Dec  9 18:15:55 2014 thomas rieux-laucat
** Last update Sun Dec 14 23:11:59 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"

void		sort_b(t_numbr **a, t_numbr **b)
{
  while ((list_check_b(b)) != 0)
    {
      if ((*b)->data <= (last_node(b))->data)
	cmd_rb(b);
      if ((*b)->data < (*b)->next->data)
	cmd_sb(b);
      if ((*b)->data >= (last_node(b))->data && ((*b)->data >= (*b)->next->data))
	cmd_pa(a, b);
    }
}

void		sort(t_numbr **a, t_numbr **b)
{
  while ((list_check_a(a)) != 0)
    {
      if ((*a)->data >= (last_node(a))->data)
	cmd_ra(a);
      if ((*a)->data > (*a)->next->data)
	cmd_sa(a);
      if ((*a)->data <= (last_node(a))->data && ((*a)->data <= (*a)->next->data))
	{
	  cmd_pb(a, b);
	  sort_b(a, b);
	}
    }
  while ((*b) != NULL)
    cmd_pa(a, b);
  my_putchar('\n');
}
