# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 10:46:23 by chquinde          #+#    #+#              #
#    Updated: 2024/05/23 20:26:20 by chquinde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS = ft_isalpha.c\
	ft_strlen.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_bzero.c\
	ft_memset.c\
	ft_memmove.c\
	ft_memcpy.c\
	ft_strlcpy.c\
	ft_memcmp.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_itoa.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_split.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
