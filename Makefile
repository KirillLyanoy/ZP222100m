SRC_DIR = src

TEST_DIR = test

BIN_DIR = bin

OBJ_DIR = obj

OBJECTS = $(OBJ_DIR)/100m.o $(OBJ_DIR)/mathfunctions.o $(OBJ_DIR)/mutches_check.o

OBJECTS_TEST = $(OBJ_DIR)/main.o $(OBJ_DIR)/tests.o $(OBJ_DIR)/mathfunctions.o $(OBJ_DIR)/mutches_check.o

$(BIN_DIR)/program.exe: $(OBJECTS)
	gcc -Wall -Werror $(OBJECTS) -o $(BIN_DIR)/program.exe

$(OBJ_DIR)/100m.o: $(SRC_DIR)/100m.c
	gcc -c $(SRC_DIR)/100m.c -o $(OBJ_DIR)/100m.o

$(OBJ_DIR)/mathfunctions.o : $(SRC_DIR)/mathfunctions.c
	gcc -c $(SRC_DIR)/mathfunctions.c -o $(OBJ_DIR)/mathfunctions.o

$(OBJ_DIR)/mutches_check.o: $(SRC_DIR)/mutches_check.c
	gcc -c $(SRC_DIR)/mutches_check.c -o $(OBJ_DIR)/mutches_check.o

test: $(OBJECTS_TEST)
	gcc $(OBJECTS_TEST) -o $(BIN_DIR)/test.exe
	./$(BIN_DIR)/test.exe

$(OBJ_DIR)/main.o: $(TEST_DIR)/main.c
	gcc -c $(TEST_DIR)/main.c -I thirdparty/ -I src/ -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/tests.o: $(TEST_DIR)/tests.c
	gcc -c $(TEST_DIR)/tests.c -I thirdparty/ -I src/ -o o$(OBJ_DIR)bj/tests.o

clean:
	rm -f -r $(OBJ_DIR)/*.o