SRC_DIR = src

TEST_DIR = test

BIN_DIR = bin

OBJECTS = obj/100m.o obj/mathfunctions.o

OBJECTS_TEST = obj/main.o obj/tests.o obj/mathfunctions.o

$(BIN_DIR)/program.exe: $(OBJECTS)
	gcc -Wall -Werror $(OBJECTS) -o $(BIN_DIR)/program.exe

obj/100m.o: $(SRC_DIR)/100m.c
	gcc -c $(SRC_DIR)/100m.c -o obj/100m.o

obj/mathfunctions.o : $(SRC_DIR)/mathfunctions.c
	gcc -c $(SRC_DIR)/mathfunctions.c -o obj/mathfunctions.o

test: $(OBJECTS_TEST)
	gcc $(OBJECTS_TEST) -o $(BIN_DIR)/test
	./$(BIN_DIR)/test

obj/main.o: $(TEST_DIR)/main.c
	gcc -c $(TEST_DIR)/main.c -I thirdparty/ -I src/ -o obj/main.o

obj/tests.o: $(TEST_DIR)/tests.c
	gcc -c $(TEST_DIR)/tests.c -I thirdparty/ -I src/ -o obj/tests.o

clean:
	rm -f -r obj/*.o