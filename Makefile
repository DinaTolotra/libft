NAME = libft.a

CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SOURCE = source
INCLUDE = include

SRCS =  \
	$(SOURCE)/ft_ctype/ft_isalnum.c\
	$(SOURCE)/ft_ctype/ft_isalpha.c\
	$(SOURCE)/ft_ctype/ft_isascii.c\
	$(SOURCE)/ft_ctype/ft_isdigit.c\
	$(SOURCE)/ft_ctype/ft_isprint.c\
	$(SOURCE)/ft_ctype/ft_tolower.c\
	$(SOURCE)/ft_ctype/ft_toupper.c\
	\
	$(SOURCE)/ft_mem/ft_calloc.c\
	$(SOURCE)/ft_mem/ft_bzero.c\
	$(SOURCE)/ft_mem/ft_memset.c\
	$(SOURCE)/ft_mem/ft_memchr.c\
	$(SOURCE)/ft_mem/ft_memcmp.c\
	$(SOURCE)/ft_mem/ft_memcpy.c\
	$(SOURCE)/ft_mem/ft_memmove.c\
	\
	$(SOURCE)/ft_str/ft_atoi.c\
	$(SOURCE)/ft_str/ft_strlen.c\
	$(SOURCE)/ft_str/ft_strncmp.c\
	$(SOURCE)/ft_str/ft_strlcpy.c\
	$(SOURCE)/ft_str/ft_strlcat.c\
	$(SOURCE)/ft_str/ft_strdup.c\
	$(SOURCE)/ft_str/ft_strchr.c\
	$(SOURCE)/ft_str/ft_strrchr.c\
	$(SOURCE)/ft_str/ft_strnstr.c\
	$(SOURCE)/ft_str/ft_substr.c\
	$(SOURCE)/ft_str/ft_strjoin.c\
	$(SOURCE)/ft_str/ft_strtrim.c\
	$(SOURCE)/ft_str/ft_split.c\
	$(SOURCE)/ft_str/ft_itoa.c\
	$(SOURCE)/ft_str/ft_strmapi.c\
	$(SOURCE)/ft_str/ft_striteri.c\
	\
	$(SOURCE)/ft_io/ft_putchar_fd.c\
	$(SOURCE)/ft_io/ft_putstr_fd.c\
	$(SOURCE)/ft_io/ft_putendl_fd.c\
	$(SOURCE)/ft_io/ft_putnbr_fd.c\
	$(SOURCE)/ft_io/ft_putunb_base_fd.c\
	$(SOURCE)/ft_io/ft_putlnb_fd.c\
	$(SOURCE)/ft_io/ft_putunb_fd.c\
	$(SOURCE)/ft_io/ft_print_char_l.c\
	$(SOURCE)/ft_io/ft_print_str_l.c\
	$(SOURCE)/ft_io/ft_print_ptr_l.c\
	$(SOURCE)/ft_io/ft_print_int_l.c\
	$(SOURCE)/ft_io/ft_print_uint_l.c\
	$(SOURCE)/ft_io/ft_print_lhex_l.c\
	$(SOURCE)/ft_io/ft_print_uhex_l.c\
	$(SOURCE)/ft_io/ft_dprintf.c\
	$(SOURCE)/ft_io/ft_printf.c\
	$(SOURCE)/ft_io/gnl.c\
	\
	$(SOURCE)/ft_list/ft_lstnew.c\
	$(SOURCE)/ft_list/ft_lstsize.c\
	$(SOURCE)/ft_list/ft_lstlast.c\
	$(SOURCE)/ft_list/ft_lstadd_front.c\
	$(SOURCE)/ft_list/ft_lstadd_back.c\
	$(SOURCE)/ft_list/ft_lstdelone.c\
	$(SOURCE)/ft_list/ft_lstclear.c\
	$(SOURCE)/ft_list/ft_lstiter.c\
	$(SOURCE)/ft_list/ft_lstmap.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(ST_LIBS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE:%=-I%)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
