NAME = fileName
CC = gcc
FLAGS = #fsanitize=address
RM = rm -rf

BOLD      = \033[1m
CGREEN    = \033[32m
CCYAN     = \033[36m

SRC = garbage_collector.c list.c #add files here

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	@echo "$(BOLD)$(CGREEN)building the project...\033[0m"
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	@echo "$(BOLD)$(CGREEN)cleaning ...\033[0m"
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all fclean clean re

