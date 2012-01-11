CC=cc
CFLAGS=-O

beam: beam.c beam.h
	$(CC) $(CFLAGS) -o beam beam.c -lncursesw

run: 
	./beam

r: run

clean:
	rm -f beam

c: clean
