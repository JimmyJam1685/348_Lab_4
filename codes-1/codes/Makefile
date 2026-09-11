
.PHONY: clean program

all: checker

checker: main.o isEven.o isOdd.o
	gcc main.o isEven.o isOdd.o -o checker
main.o: main.c isEven.h isOdd.h
	gcc -c main.c -o $@
isEven.o: isEven.c  isEven.h
	gcc -c isEven.c -o $@
isOdd.o: isOdd.c isOdd.h
	gcc -c isOdd.c -o $@

clean:
	rm -rf *.o checker

