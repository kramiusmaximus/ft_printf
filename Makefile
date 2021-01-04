NAME = libftprintf.a
SOURCES_DIRECTORY = srcs
SOURCES = $(shell find $(SOURCES_DIRECTORY) -name '*.c')
SOURCES_LIBFT = $(shell find libft -name '*.c')
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
OBJECTS_LIBFT = $(patsubst %.c, %.o, $(SOURCES_LIBFT))
HEADERS_DIRECTORY = ./includes ./libft/includes
HEADERS_LIST = ft_printf.h libft.h
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:						${NAME}

$(NAME):					${OBJECTS} ${OBJECTS_LIBFT}
							make -C libft
							cp ./libft/libft.a ./$(NAME)
							ar rc $(NAME) $(OBJECTS)
							ranlib $(NAME)

%.o: 						%.c
							$(CC) $(CFLAGS) $(addprefix -I, $(HEADERS_DIRECTORY)) -c -o $@ $<

clean:
							rm -f $(OBJECTS)
							make -C libft clean

fclean:						clean
							rm -f $(NAME)
							make -C libft fclean

re:							fclean all
