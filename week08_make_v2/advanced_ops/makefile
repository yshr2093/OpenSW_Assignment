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

LIBS=$(OBJ_DIR)/mypow.o $(OBJ_DIR)/mymod.o
$(LIB_DIR)/libmyadvanced.a: $(LIBS)
	$(AR) rv $@ $^
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJ_DIR)/* $(LIB_DIR)/libmyadvanced.a
