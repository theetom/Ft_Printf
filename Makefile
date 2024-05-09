# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 14:40:27 by toferrei          #+#    #+#              #
#    Updated: 2024/05/09 15:43:44 by toferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a

SOURCE = \
			ft_printf.c\
			ft_putchar_fd.c\
			ft_putnbr_base.c\
			ft_putstr_fd.c\
			ft_strlen.c

OBJECTS = $(SOURCE:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re