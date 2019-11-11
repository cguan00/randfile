all: randfile.o main.o
	gcc -o randTest randfile.o main.o

randfile.o: randfile.c randfile.h
	gcc -c randfile.c

main.o: main.c randfile.h
	gcc -c main.c

run:
	./randTest

clean:
	rm *.o
	rm *~
