# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 17:53:40 by rda-cunh          #+#    #+#              #
#    Updated: 2025/03/10 19:28:51 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
    ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_printf.c ft_putchar.c ft_putstr.c \
	ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putpointer.c get_next_line.c \
	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	ft_free_array.c ft_free_pointer.c ft_isnum.c ft_print_array.c \
	ft_safe_atol.c ft_sort_array.c 

BFILES = $(wildcard ft_lst*.c)

OBJS = $(CFILES:.c=.o)
BONUS_OBJS = $(BFILES:.c=.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror -fPIE
RM = rm -f
AR = ar -rc
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
