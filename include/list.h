/*
** list.h for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap/include
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Dec  8 14:26:20 2014 thomas rieux-laucat
** Last update Sun Dec 14 22:37:42 2014 thomas rieux-laucat
*/

#ifndef LIST_H_
# define LIST_H_

#include <stdlib.h>

typedef struct  s_num
 {
   int           data;
   struct s_num  *next;
 }               t_numbr;

void	display(t_numbr **, t_numbr **);
void	error_msg();
int	check_arg(int, char **);
int	list_check_a(t_numbr **);
int	list_check_b(t_numbr **);
t_numbr	*my_params_in_list(int, int *);
void	aff_list(t_numbr *);
int	my_put_in_list(t_numbr **, int);
int	*get_arg(int, char **);
void	my_puttabnbr(int *, int);
int	cmd_sa(t_numbr **);
int	cmd_sb(t_numbr **);
int	cmd_ss(t_numbr **, t_numbr **);
int	cmd_pa(t_numbr **, t_numbr **);
int	cmd_pb(t_numbr **, t_numbr **);
int	cmd_ra(t_numbr **);
int	cmd_rb(t_numbr **);
void	cmd_rr(t_numbr **, t_numbr **);
t_numbr	*last_node(t_numbr **);
int	pop(t_numbr **);
void	my_putchar(char);
void	my_putstr(char *);
void	sort(t_numbr **, t_numbr **);
void	sort_b(t_numbr **, t_numbr **);
void	sort_v(t_numbr **, t_numbr **);
void	sort_v_b(t_numbr **, t_numbr **);
int	my_getnbr(char *);
void	my_putnbr(int);
int	my_strlen(char *);
void	free_list(t_numbr **);
int	cmd_r(t_numbr **);

#endif /* !LIST_H_ */
