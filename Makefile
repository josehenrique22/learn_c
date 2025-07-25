CC= gcc
CFLAGS = -g

DIR ?= .
FILE ?= .
BIN ?= $(FILE)

run:
	@gcc -Wall $(DIR)/$(FILE).c -o $(BIN)
	@echo "Executando: $(BIN)"
	@./$(BIN)
	@rm -f $(BIN)