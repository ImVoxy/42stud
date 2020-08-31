NAME		= libft.a

SRCS_NAME	=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strldup.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				get_next_line/get_next_line.c \
				ft_printf/ft_printf.c \
				ft_printf/ft_printf_utils.c \
				ft_printf/ft_print_type.c \
				ft_printf/ft_print_type2.c \
				ft_printf/libft/ft_atoi2.c \
				ft_printf/libft/ft_itoal.c \
				ft_printf/libft/ft_callocs.c \
				ft_printf/libft/ft_itoa_base.c \
				ft_printf/libft/ft_putstr.c

OBJS_NAME	= $(SRCS_NAME:.c=.o)

SRCS_PATH 	= .
OBJS_PATH	= .
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -I./includes

    
all					:	$(NAME)

$(NAME)				:	$(OBJS)
					ar rc $(NAME) $(OBJS)

$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.c
					$(CC) $(CFLAGS) -o $@ -c $<

clean 				:
						$(RM) $(OBJS)

fclean				:	clean
					$(RM) $(NAME)

re 					:	fclean all
