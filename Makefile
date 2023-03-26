NAME = libft.a

SRCS = functions/ft_isalpha.c \
       functions/ft_strnstr.c \
       functions/ft_split.c \
       functions/ft_strmapi.c \
       functions/ft_itoa.c \
       functions/ft_putnbr_fd.c \
       functions/ft_striteri.c \
       functions/ft_tolower.c \
       functions/ft_putendl_fd.c \
       functions/ft_putstr_fd.c \
       functions/ft_memmove.c \
       functions/ft_putchar_fd.c \
       functions/ft_strlcpy.c \
       functions/ft_strjoin.c \
       functions/ft_substr.c \
       functions/ft_calloc.c \
       functions/ft_strlcat.c \
       functions/ft_strlen.c \
       functions/ft_toupper.c \
       functions/ft_memcpy.c \
       functions/ft_strdup.c \
       functions/ft_atoi.c \
       functions/ft_memcmp.c \
       functions/ft_strchr.c \
       functions/ft_memchr.c \
       functions/ft_strrchr.c \
       functions/ft_strncmp.c \
       functions/ft_memset.c \
       functions/ft_isdigit.c \
       functions/ft_isalnum.c \
       functions/ft_isascii.c \
       functions/ft_isprint.c \
       functions/ft_bzero.c \
       functions/ft_strtrim.c

B_SRCS = functions/ft_lstadd_back_bonus.c \
     functions/ft_lstadd_front_bonus.c \
     functions/ft_lstdelone_bonus.c \
     functions/ft_lstlast_bonus.c \
     functions/ft_lstnew_bonus.c \
     functions/ft_lstsize_bonus.c \
     functions/ft_lstiter_bonus.c \
     functions/ft_lstclear_bonus.c\
	 functions/ft_lstmap_bonus.c
CC = gcc 
FLAGS = -Wall -Wextra -Werror
B_OBJ = $(B_SRCS:.c=.o)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)

bonus: $(B_OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	ar rc $(NAME) $@
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(B_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
