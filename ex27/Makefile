# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmillero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:04:03 by xmillero          #+#    #+#              #
#    Updated: 2016/11/11 16:58:41 by xmillero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c
OBJ = ft_display_file.o
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJ)
		gcc -Wall -Wextra -Werror -c $(SRC)
		gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
