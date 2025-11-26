PROJ_DIR=.
SRC_DIR=$(PROJ_DIR)/src
OBJ_DIR=$(PROJ_DIR)/obj
LIB_DIR=$(PROJ_DIR)/lib
INC_DIR=$(PROJ_DIR)/include
BIN_DIR=$(PROJ_DIR)/bin

CC=gcc
SRCS=$(filter-out $(SRC_DIR)/myapp.c , $(wildcard $(SRC_DIR)/*.c))
LIB_OBJ=$(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o))

.PHONY: clean all
all: $(BIN_DIR)/myapp
$(BIN_DIR)/myapp: $(SRC_DIR)/myapp.c $(LIB_DIR)/libmyops.so
	$(CC) -o $@ $< -L$(LIB_DIR) -lmyops -I$(INC_DIR)
$(LIB_DIR)/libmyops.so:	$(LIB_DIR)/libmyops.so.1
	ln -s libmyops.so.1 $@
$(LIB_DIR)/libmyops.so.1: $(LIB_DIR)/libmyops.so.1.0
	ln -s libmyops.so.1.0 $@
$(LIB_DIR)/libmyops.so.1.0: $(LIB_OBJ)
	$(CC) -fPIC -shared -o $@ $^ 
$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
	$(CC) -fPIC -c $< -o $@ -I$(INC_DIR)

clean:
	rm -rf $(OBJ_DIR)/* $(LIB_DIR)/* $(BIN_DIR)/*