NAME	=	push_swap
SRCS	= 	main.c ft_parse.c ft_part1_median.c ft_part2_cost.c \
			srcs/ft_commands_1.c srcs/ft_commands_2.c srcs/ft_commands_3.c \
			srcs/ft_main_utils.c srcs/ft_parse_check_int.c srcs/ft_parse_check.c \
			srcs/ft_parse_createB.c srcs/ft_parse_utils.c srcs/ft_part1_utils.c \
			srcs/ft_part2_find_cost.c srcs/ft_part2_find_cost_seperated.c \
			srcs/ft_part2_operation.c srcs/ft_part2_operation_seperated.c \
			srcs/ft_part2_stabilizer.c srcs/ft_quicksort.c

CFLAGS	= -Wall -Werror -Wextra
CC		= cc
BUILD_DIR = .build
OBJS	= $(SRCS:%.c=$(BUILD_DIR)/%.o)

all : ${NAME}

${NAME} : ${OBJS}
		make -C libft
		${CC} $(OBJS) -o $(NAME) -L./libft/ -lft

${BUILD_DIR}/%.o:%.c
		${CC} ${CFLAGS} -c $< -o $@

clean :
		make -C ./libft/ clean
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME} libft/libft.a

re : fclean all

.PHONY : all bonus clean fclean re