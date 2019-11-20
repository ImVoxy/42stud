NAME		= libft.a

SRCS_NAME	=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
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
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

SRCS_B_NAME	=	ft_lstadd_front_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

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
