<<<<<<< HEAD
<<<<<<< HEAD
CC=clang
=======
CC=gcc
>>>>>>> parent of c2be6e9 (practical7)
=======
CC=gcc
>>>>>>> practical7
CFLAgs=-Wall -g
TARGET = mainapp

all: $(TARGET)

$(TARGET): main.o matmult.o
	$(CC) $(CFLAGS) main.o matmult.o -o mainapp

%.o: %.c
<<<<<<< HEAD
<<<<<<< HEAD
	$(CC) $(CFLAGS) -c $^ 
=======
	$(CC) $(CFLAGS) -c $^  
>>>>>>> parent of c2be6e9 (practical7)
=======
	$(CC) $(CFLAGS) -c $^  
>>>>>>> practical7

clean:
	rm -f a.out *.o mainapp
