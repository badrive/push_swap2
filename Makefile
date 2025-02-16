NAME = pushswap.a

SRCS = mandatory/utils.c mandatory/utils2.c mandatory/op/op1.c mandatory/op/op2.c mandatory/op/op3.c \
		mandatory/s_sort.c mandatory/sort.c\

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus