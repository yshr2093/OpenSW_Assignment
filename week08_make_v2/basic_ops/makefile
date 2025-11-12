PROJ_DIR=$(shell pwd)
PARENT_DIR=..
SRC_DIR=$(PROJ_DIR)/src
BIN_DIR=$(PROJ_DIR)/bin
OBJ_DIR=$(PROJ_DIR)/obj
INC_DIR=$(PARENT_DIR)/include
LIB_DIR=$(PARENT_DIR)/lib
CC=gcc
AR=ar
.PHONY: clean 

LIBS=$(OBJ_DIR)/add.o $(OBJ_DIR)/sub.o $(OBJ_DIR)/mul.o $(OBJ_DIR)/div.o 

$(LIB_DIR)/libmybasic.a: $(LIBS)
	$(AR) rv $@ $^
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJ_DIR)/* $(LIB_DIR)/libmybasic.a
