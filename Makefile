SRC_DIR = src

TEST_DIR = test

OBJECTS = obj/100m.o obj/mathfunctions.o

OBJECTS_TEST = obj/main.o obj/tests.o obj/mathfunctions.o

program: $(OBJECTS)
	gcc -Wall -Werror $(OBJECTS) -o bin/program

obj/100m.o: $(SRC_DIR)/100m.c
	gcc -c $(SRC_DIR)/100m.c -o obj/100m.o

obj/mathfunctions.o : $(SRC_DIR)/mathfunctions.c
	gcc -c $(SRC_DIR)/mathfunctions.c -o obj/mathfunctions.o

test: $(OBJECTS_TEST)
	gcc $(OBJECTS_TEST) -o bin/test
	./bin/test

obj/main.o: $(TEST_DIR)/main.c
	gcc -c $(TEST_DIR)/main.c -I thirdparty/ -I src/ -o obj/main.o

obj/tests.o: $(TEST_DIR)/tests.c
	gcc -c $(TEST_DIR)/tests.c -I thirdparty/ -I src/ -o obj/tests.o

clean:
	rm -f -r obj/*.o