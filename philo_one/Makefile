NAME = philo_one

SRC = main.c options.c output.c lib.c ft_itoa.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

HDR = philo_one.h lib.h

HDR_FULL = $(addprefix include/, $(HDR))

SRC_DIR = src

OBJ_DIR = obj

FLAGS = -Wall -Wextra #-Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HDR_FULL) | $(OBJ_DIR)
	gcc $(FLAGS) -pthread -g -c -I include -o $@ $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "Object directory is created! (./obj)"

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
