# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 11:33:20 by ipetruni          #+#    #+#              #
#    Updated: 2023/06/06 14:20:41 by ipetruni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libftprintf.a
SRCS	=	ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putptr.c \
			ft_putnbr.c \
			ft_putunbr.c \
			ft_puthexlow.c \
			ft_puthexupp.c \

OBJS	= $(SRCS:.c=.o)

RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS} 
	${LIBC} $(NAME) $(OBJS) 

all: $(NAME)

fclean: clean
	$(RM) $(NAME) 

clean:
	$(RM) -f $(OBJS) 
    
re: fclean all

.PHONY: all clean fclean re .c.o