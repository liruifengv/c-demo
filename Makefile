foo: foo.o bar.o
	gcc -o foo foo.o bar.o

foo.o: bar.h foo.c
	gcc -c foo.c

bar.o: bar.h bar.c
	gcc -c bar.c

.PHONY: clean
clean:
	rm -f *.o foo