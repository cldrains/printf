NAME = printf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRC =	ft_print_ptr.c \
		ft_print_str_nbr.c \
		ft_print_hex.c \
		ft_print_unbr.c \
		ft_printf.c \
		ft_itoa.c \

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
