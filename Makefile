# -*- Makefile -*-

all: txtfind isort


txtfind: Libtxtfind.a mainT.o
	gcc -Wall -o txtfind mainT.o Libtxtfind.a

Libtxtfind.a: Mytxtfind.o
	ar -rcs Libtxtfind.a Mytxtfind.o

mainT.o: mainT.c Mytxtfind.h
	gcc -Wall -c mainT.c

Mytxtfind.o: Mytxtfind.c Mytxtfind.h
	gcc -Wall -c Mytxtfind.c 



isort: Libsort.a mainS.o
	gcc -Wall -o isort mainS.o Libsort.a

Libsort.a: insort.o
	ar -rcs Libsort.a insort.o

mainS.o: mainS.c insort.h
	gcc -Wall -c mainS.c

insort.o: insort.c insort.h
	gcc -Wall -c insort.c 


.PHONY: clean all 

clean:
	rm -f *.o *.a txtfind isort
