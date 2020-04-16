##
## EPITECH HUB WORKSHOP, 2020
## CSFML particles creation
## File description:
## Makefile
##

NAME = a.out
SRCS = src/main.c src/events.c src/particles.c src/draw.c
OBJS = $(SRCS:.c=.o)
CFLAGS += -I./include/ -Wall -Wextra -Werror
LDFLAGS += -lcsfml-window -lcsfml-graphics

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all