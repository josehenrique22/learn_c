CC= gcc
CFLAGS = -g -Wall -Werror

DIR ?= .
FILE ?= .
BIN ?= $(FILE)

run:
	@gcc $(DIR)/$(FILE).c -o $(BIN)
	@echo "Executando: $(BIN)"
	@./$(BIN)
	@rm -f $(BIN)