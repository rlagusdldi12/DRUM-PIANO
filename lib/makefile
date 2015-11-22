%.o: %.c
	gcc -g -Wall -I/home/vaio/project/include -c $< -o $@
libfuncs.a:1.o 2.o
	ar rv libfuncs.a 1.o 2.o
clean:
	rm *.o *.a
