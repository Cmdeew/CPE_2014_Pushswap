/*
** sort_v.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Sun Dec 14 21:26:17 2014 thomas rieux-laucat
** Last update Sun Dec 14 23:10:10 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include "include/list.h"


void	display(t_numbr **a, t_numbr **b)
{
      my_putstr("\nlist a : ");
      aff_list(*a);
      my_putstr("\nlist b : ");
      aff_list(*b);
      my_putchar('\n');
      my_putchar('\n');
}

void            sort_v_b(t_numbr **a, t_numbr **b)
{
  display(a, b);
  while ((list_check_b(b)) != 0)
    {
      if ((*b)->data <= (last_node(b))->data)
	{
	  cmd_rb(b);
	  display(a, b);
	}
      if ((*b)->data < (*b)->next->data)
	{
	  cmd_sb(b);
	  display(a, b);
	}
      if ((*b)->data >= (last_node(b))->data && ((*b)->data >= (*b)->next->data))
	{
	  cmd_pa(a, b);
	  display(a, b);
	}
      display(a, b);
    }
}

void            sort_v(t_numbr **a, t_numbr **b)
{
  display(a, b);
  while ((list_check_a(a)) != 0)
    {
      if ((*a)->data >= (last_node(a))->data)
	{
	  cmd_ra(a);
	  display(a, b);
	}
      if ((*a)->data > (*a)->next->data)
	{
	  cmd_sa(a);
	  display(a, b);
	}
      if ((*a)->data <= (last_node(a))->data && ((*a)->data <= (*a)->next->data))
	{
	  cmd_pb(a, b);
	  display(a, b);
	  sort_b(a, b);
	}
    }
  while ((*b) != NULL)
    {
      cmd_pa(a, b);
      display(a, b);
    }
}
