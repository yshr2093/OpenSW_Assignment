PROJ_DIR=$(shell pwd)
SRC_DIR=$(PROJ_DIR)/src
INC_DIR=$(PROJ_DIR)/include
BIN_DIR=$(PROJ_DIR)/bin
OBJ_DIR=$(PROJ_DIR)/obj
LIB_DIR=$(PROJ_DIR)/lib

CC=gcc
STATIC_LIBS=$(LIB_DIR)/libmybasic.a $(LIB_DIR)/libmyadvanced.a
CFLAGS=-I$(INC_DIR) -lm
LDFLAGS=-L$(LIB_DIR) -lmybasic -lmyadvanced

.PHONY: clean all basic_ops advanced_ops

all: basic_ops advanced_ops $(BIN_DIR)/myapp

$(BIN_DIR)/myapp: $(SRC_DIR)/myapp.c $(STATIC_LIBS)
	$(CC) $< -o $@ $(CFLAGS) $(LDFLAGS)

basic_ops:
	$(MAKE) -C basic_ops

advanced_ops:
	$(MAKE) -C advanced_ops
clean:
	rm -f $(OBJ_DIR)/* $(BIN_DIR)/*
	$(MAKE) -C basic_ops clean
	$(MAKE) -C advanced_ops clean
