# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prosa <prosa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 09:09:28 by prosa             #+#    #+#              #
#    Updated: 2017/10/12 16:56:43 by prosa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FTS = 	ft_putchar ft_putstr ft_putnbr ft_strlen ft_strcmp ft_atoi \
		ft_tolower ft_toupper ft_islower ft_isupper ft_isprint ft_isascii \
		ft_isalnum ft_isalpha ft_isdigit ft_strncmp ft_strcpy ft_strncpy \
		ft_strcat ft_strdup ft_memset ft_bzero ft_memcpy ft_memcmp ft_strncat \
		ft_isspace ft_isblank ft_memmove ft_putchar_fd ft_isblank ft_putendl \
		ft_putstr_fd ft_putendl_fd ft_memdel ft_strnew ft_strdel ft_strclr \
		ft_striter ft_striteri ft_strequ ft_putnbr_fd ft_strsub ft_memalloc \
		ft_strmap ft_strmapi ft_memccpy ft_memchr ft_strlcat ft_strchr	\
		ft_strrchr ft_strstr ft_strnstr ft_strnequ ft_strjoin ft_strtrim \
		ft_nlen ft_itoa ft_strsplit ft_lstnew ft_lstdelone ft_lstdel ft_lstadd \
		ft_lstiter ft_lstmap\

SRC = $(addsuffix .c, $(FTS))
OUT = $(addsuffix .o, $(FTS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I ./ && \
	ar rcs $(NAME) $(OUT)
	@ranlib $(NAME)


clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f *.o

re: fclean all

norm1:
		@norminette ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
			ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
			ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c\
			ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

norm2:
		@norminette ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c\
			ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
			ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
			ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
			ft_strtrim.c ft_tolower.c ft_toupper.c libft.h
