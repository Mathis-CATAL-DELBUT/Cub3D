# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 17:21:15 by tedelin           #+#    #+#              #
#    Updated: 2023/06/01 18:36:53 by tedelin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_len_until.c ft_tablen.c ft_splitnum.c
OBJS = $(addprefix obj/, $(SRCS:.c=.o))
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	    ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS_BONUS = $(addprefix obj/, $(SRCS_BONUS:.c=.o))
SRCS_PRINTF = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS_PRINTF = $(addprefix obj/, $(SRCS_PRINTF:.c=.o))
SRCS_GNL = get_next_line.c get_next_line_utils.c
OBJS_GNL = $(addprefix obj/, $(SRCS_GNL:.c=.o))
INCLUDE = -I.
HEADER = libft.h

all: $(NAME) bonus gnl printf

$(NAME): $(OBJS)
	@ar -rsc $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	@ar -rsc $(NAME) $(OBJS_BONUS)

gnl: $(OBJS_GNL)
	@ar -rsc $(NAME) $(OBJS_GNL)

printf: $(OBJS_PRINTF)
	@ar -rsc $(NAME) $(OBJS_PRINTF)

obj/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

clean:
	@rm -f $(OBJS) $(OBJS_BONUS) $(OBJS_GNL) $(OBJS_PRINTF)
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus gnl printf