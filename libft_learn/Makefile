# Nome do executável final
NAME = libft_tester

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -Werror

# Diretório da libft
LIBFT_DIR = ./libft

# Arquivo da biblioteca libft
LIBFT = $(LIBFT_DIR)/libft.a

# Arquivos fonte do seu tester
SRCS = main.c

# Arquivos objeto gerados a partir dos arquivos fonte
OBJS = $(SRCS:.c=.o)

# Regra padrão
all: $(NAME)

# Regra para criar o executável
$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# Regra para compilar a libft
$(LIBFT):
	make -C $(LIBFT_DIR)

# Regra para compilar os arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

# Limpar arquivos objeto e executáveis
clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

# Limpar tudo, incluindo o executável
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

# Reconstruir o projeto
re: fclean all

# Declarar as regras que não são arquivos
.PHONY: all clean fclean re
