SRC_DIR = src

OBJECTS = 100m.o mathfunctions.o

program: $(OBJECTS)
	gcc $(OBJECTS) -o program

100m.o: $(SRC_DIR)/100m.c
	gcc -c $(SRC_DIR)/100m.c -o 100m.o

mathfunctions.o : $(SRC_DIR)/mathfunctions.c
	gcc -c $(SRC_DIR)/mathfunctions.c -o mathfunctions.o
