CC = gcc
CFLAGS = -Wall 

#SRC = main.c
SRC = exo.c
OBJ = $(SRC:.c=.o)
#BIN = main
BIN = exo

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN)

run: 
	./$(BIN)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)

re: fclean alllm