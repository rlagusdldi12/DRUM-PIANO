%.o: %.c
	gcc -g -Wall -I/home/vaio/image2/include -c $< -o $@
libfuncs.a:func1.o func2.o
	ar rv libfuncs.a func1.o func2.o
clean:
	rm *.o *.a
