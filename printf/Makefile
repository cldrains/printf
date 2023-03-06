NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRC =	ft_print_hex_ptr.c \
		ft_print_str.c \
		ft_print_nbr.c \
		ft_printf.c \

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all :$(NAME)
clean :
		$(RM) $(OBJS)
fclean : clean
		$(RM) $(NAME)
re : fclean
		$(MAKE) all
.PHONY: all clean fclean re
