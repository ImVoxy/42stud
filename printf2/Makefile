NAME		= libftprintf.a

SRCS_NAME	=	ft_printf.c \
				ft_print_type.c \
				ft_print_type2.c \
				ft_printf_utils.c \
				libft/ft_atoi.c \
				libft/ft_callocs.c \
				libft/ft_isdigit.c \
				libft/ft_itoa_base.c \
				libft/ft_itoal.c \
				libft/ft_putstr.c \
				libft/ft_strdup.c \
				libft/ft_strlen.c \
				libft/ft_toupper.c \
				libft/ft_abs.c

SRCS_B_NAME	= 

OBJS_NAME	= $(SRCS_NAME:.c=.o)
OBJS_B_NAME	= $(SRCS_B_NAME:.c=.o)

SRCS_PATH 	= .
OBJS_PATH	= .
OBJS_B_PATH	= .
SRCS_B_PATH	= .
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))
SRCS_B		= $(addprefix $(SRCS_B_PATH)/,$(SRCS_B_NAME))
OBJS_B		= $(addprefix $(OBJS_B_PATH)/,$(OBJS_B_NAME))

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -I./includes


bonus				:	$(OBJS) $(OBJS_B)
					ar rc $(NAME) $(OBJS) $(OBJS_B)
    
$(OBJS_B_PATH)/%.o	: $(SRCS_B_PATH)/%.c
					$(CC) $(CFLAGS) -o $@ -c $<

all					:	$(NAME)

$(NAME)				:	$(OBJS)
					ar rc $(NAME) $(OBJS)

$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.c
					$(CC) $(CFLAGS) -o $@ -c $<

clean 				:
						$(RM) $(OBJS) $(OBJS_B)

fclean				:	clean
					$(RM) $(NAME)

re 					:	fclean all
