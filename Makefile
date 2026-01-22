NAME = libft.a

CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

DEPS = libft.h
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
