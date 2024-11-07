CC=clang
CFLAgs=-Wall -g
TARGET = mainapp

all: $(TARGET)

$(TARGET): main.o matmult.o
	$(CC) $(CFLAGS) main.o matmult.o -o mainapp

%.o: %.c
	$(CC) $(CFLAGS) -c $^ 

clean:
	rm -f a.out *.o mainapp
