/*
** my_putnbr.c for lib in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 12:02:33 2014 thomas rieux-laucat
** Last update Mon Dec  8 14:43:02 2014 thomas rieux-laucat
*/

#include "include/list.h"

void	my_putnbr(int nb)
{
  if (nb >= 10)
    my_putnbr(nb / 10);
  if ( nb < 0)
    {
      my_putchar('-');
      my_putnbr(-nb);
    }
  else 
    my_putchar((nb % 10) + 48);
}
