PROJ_DIR=$(shell pwd)
SRC_DIR=$(PROJ_DIR)/src
INC_DIR=$(PROJ_DIR)/include
BIN_DIR=$(PROJ_DIR)/bin
OBJ_DIR=$(PROJ_DIR)/obj
LIB_DIR=$(PROJ_DIR)/lib

CC=gcc
AR=ar
LIBS=$(OBJ_DIR)/add.o $(OBJ_DIR)/sub.o $(OBJ_DIR)/mul.o $(OBJ_DIR)/div.o 
.PHONY: clean all basic

all: $(BIN_DIR)/myapp

$(BIN_DIR)/myapp: $(LIB_DIR)/libmybasic.a $(OBJ_DIR)/myapp.o
	$(CC) -o $@ $(OBJ_DIR)/myapp.o -L$(LIB_DIR) -lmybasic
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@ -I$(INC_DIR)

basic: $(LIB_DIR)/libmybasic.a 

$(LIB_DIR)/libmybasic.a: $(LIBS)
	$(AR) rv $@ $^
clean:
	rm -f $(OBJ_DIR)/*.o $(BIN_DIR)/myapp