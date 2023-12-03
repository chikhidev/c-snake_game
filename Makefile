NAME = snake_game
SFILES = controle.c input.c main.c map.c switcher.c
OBJ = $(SFILES:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $^ -o $@

$(OBJ):%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)