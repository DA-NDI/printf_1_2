#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolgin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 18:42:23 by avolgin           #+#    #+#              #
#    Updated: 2017/12/30 20:35:12 by avolgin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

SRC_LIB =./libft/ft_atoi.c \
		./libft/ft_bzero.c \
		./libft/ft_intlen.c \
		./libft/ft_is_whitespace.c \
		./libft/ft_isalnum.c \
		./libft/ft_isalpha.c \
		./libft/ft_isascii.c \
		./libft/ft_isdigit.c \
		./libft/ft_isprint.c \
		./libft/ft_itoa.c \
		./libft/ft_lstadd.c \
		./libft/ft_lstdel.c \
		./libft/ft_lstdelone.c \
		./libft/ft_lstiter.c \
		./libft/ft_lstmap.c \
		./libft/ft_lstnew.c \
		./libft/ft_memalloc.c \
		./libft/ft_memccpy.c \
		./libft/ft_memchr.c \
		./libft/ft_memcmp.c \
		./libft/ft_memcpy.c \
		./libft/ft_memdel.c \
		./libft/ft_memmove.c \
		./libft/ft_memset.c \
		./libft/ft_pow.c \
		./libft/ft_putchar.c \
		./libft/ft_putchar_fd.c \
		./libft/ft_putendl.c \
		./libft/ft_putendl_fd.c \
		./libft/ft_putnbr.c \
		./libft/ft_putnbr_fd.c \
		./libft/ft_putstr.c \
		./libft/ft_putstr_fd.c \
		./libft/ft_reverse.c \
		./libft/ft_rot_n.c \
		./libft/ft_strcat.c \
		./libft/ft_strchr.c \
		./libft/ft_strclr.c \
		./libft/ft_strcmp.c \
		./libft/ft_strcpy.c \
		./libft/ft_strdel.c \
		./libft/ft_strdup.c \
		./libft/ft_strequ.c \
		./libft/ft_striter.c \
		./libft/ft_striteri.c \
		./libft/ft_strjoin.c \
		./libft/ft_strlcat.c \
		./libft/ft_strlen.c \
		./libft/ft_strmap.c \
		./libft/ft_strmapi.c \
		./libft/ft_strncat.c \
		./libft/ft_strncmp.c \
		./libft/ft_strncpy.c \
		./libft/ft_strnequ.c \
		./libft/ft_strnew.c \
		./libft/ft_strnstr.c \
		./libft/ft_strrchr.c \
		./libft/ft_strsplit.c \
		./libft/ft_strstr.c \
		./libft/ft_strsub.c \
		./libft/ft_strtrim.c \
		./libft/ft_strzero.c \
		./libft/ft_swap_bits.c \
		./libft/ft_tolower.c \
		./libft/ft_toupper.c \
		./libft/get_next_line.c
SRC_PRINTF = ft_printf.c ft_parse_all.c
OBJECT_LIB = $(SRC_LIB:.c=.o)

OBJECT_PRINTF = $(SRC_PRINTF:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJECT_LIB) $(OBJECT_PRINTF)
		ar rc $(NAME) $(OBJECT_LIB) $(OBJECT_PRINTF)
%.o: %.c
		gcc $(FLAGS) -o $@ -c $<
clean:
		/bin/rm -f $(OBJECT_LIB)
		/bin/rm -f $(OBJECT_PRINTF)
fclean: clean
		/bin/rm -f $(NAME)
re:		fclean all
