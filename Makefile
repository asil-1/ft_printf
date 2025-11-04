CC= cc
CFLAGS= -Wall -Wextra -Werror
HEADER=printf.h

NAME=libftprintf.a

SRC= ft_printf.c \
	print_percent.c

OBJ= $(addprefix obj/, $(SRC: .c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -rf $(OBJ)

flcean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re


