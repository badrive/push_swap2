NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = libft/ft_isdigit.c libft/ft_split.c libft/ft_strlen.c libft/ft_bzero.c \
       libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_strchr.c libft/ft_strjoin.c \
       libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
	   libft/ft_lstadd_back_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstclear_bonus.c \
	   libft/ft_lstlast_bonus.c libft/ft_lstnew_bonus.c \
		mandatory/utils.c mandatory/utils2.c mandatory/utils3.c mandatory/op/op1.c  \
		mandatory/s_sort.c mandatory/sort.c mandatory/op/op2.c mandatory/op/op3.c \
		push_swap.c libft/ft_memcpy.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all