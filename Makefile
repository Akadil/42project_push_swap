NAME	= push_swap
SRCS	= *.c srcs/*.c srcs/libft/*.c libft/*.c

INC		= -I ./headers/
FLAGS	= -Wall -Werror -Wextra
OBJS	= ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
		make -C ./libft/
		gcc ${FLAGS} ${INC} $(OBJS) -o $(NAME) libft/libft.a

%.o:%.c
		gcc ${FLAGS} -c $< -o $@

clean :
		make -C ./libft/ clean
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME} libft/libft.a

re : fclean all

.PHONY : all bonus clean fclean re