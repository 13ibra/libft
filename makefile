# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 15:43:49 by ibel-kha          #+#    #+#              #
#    Updated: 2019/04/22 17:22:19 by ibel-kha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRCS) -I .
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
