NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror -I.
RM=rm -rf

SOURCE = ft_bzero.c ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlen.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memccpy.c ft_isprint.c ft_memccpy.c \
ft_strlcpy.c 

BNS_SRC=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJECT=$(SOURCE:.c=.o)
BNS_OBJECT=$(BNS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

bonus: $(BNS_OBJECT)
	ar rcs $(NAME) $(BNS_OBJECT)

clean:
	$(RM) $(OBJECT) $(BNS_OBJECT)

fclean: clean
	$(RM) $(NAME)
	@echo "All Deleted..."

re: fclean all

.PHONY: clean fclean all re bonus
