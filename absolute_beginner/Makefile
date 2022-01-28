
%.o : %.c
	gcc -c $< -o $@

str: myIO.o arraySort.o
	gcc -o $@ myIO.o arraySort.o

crypt: myIO.o crypto.o
	gcc -g -o $@ crypto.o myIO.o

test: structTest.c
	gcc -o $@ structTest.c

substring: myIO.o mysubstr.o
	gcc -g -o $@  mysubstr.o myIO.o

clean:
	rm *.o
