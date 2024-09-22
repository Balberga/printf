# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balberga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 20:15:56 by balberga          #+#    #+#              #
#    Updated: 2024/09/12 20:23:09 by balberga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libftprintf.a

SRCS = ft_printf.c \
       conversions/ft_print_char.c \
       conversions/ft_print_string.c \
       conversions/ft_print_pointer.c \
       conversions/ft_print_decimal.c \
       conversions/ft_print_unsigned.c \
       conversions/ft_print_hex.c \
       conversions/ft_print_percent.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra -I conversions -I printf

.c.o:
	$(CC) $(FLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

