SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
		$(RM) $(OBJS) 

fclean: clean
		$(RM) $(NAME)

		fclean $(NAME)

re:		fclean $(NAME)
		
.PHONY: all clean fclean re


