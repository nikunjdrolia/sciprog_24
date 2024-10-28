CC=clang
CFLAgs=-Wall -g

all: mainapp

mainapp: main.o matmult.o
	$(CC) $(CFLAGS) main.o matmult.o -o mainapp

%.o: %.c
	$(CC) $(CFLAGS) -c $^ 

clean:
	rm a.out *.o mainapp
