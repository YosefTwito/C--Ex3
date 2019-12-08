# -*- Makefile -*-

all: txtfind

txtfind: Libtxtfind.a main.o
	gcc -Wall -o txtfind main.o Libtxtfind.a

Libtxtfind.a: Mytxtfind.o
	ar -rcs Libtxtfind.a Mytxtfind.o

main.o: main.c Mytxtfind.h
	gcc -Wall -c main.c

Mytxtfind.o: Mytxtfind.c Mytxtfind.h
	gcc -Wall -c Mytxtfind.c 

.PHONY: clean all 

clean:
	rm -f *.o *.a txtfind
