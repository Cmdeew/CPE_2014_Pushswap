##
## Makefile for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Mon Dec  8 12:13:21 2014 thomas rieux-laucat
## Last update Sun Dec 14 22:07:28 2014 thomas rieux-laucat
##

SRC		=	list.c \
			my_getnbr.c \
			my_putnbr.c \
			my_putstr.c \
			main.c \
			base_fonction.c \
			my_revstr.c \
			commande.c \
			sort.c \
			sort_v.c \
			cmd_s.c \
			cmd_p.c \
			cmd_r.c

NAME		=	push_swap

CC		=	gcc

RM		=	rm -rf

OBJS		=	$(SRC:.c=.o)

CFLAGS		+=	-Wall -Wextra -g

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
