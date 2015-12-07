%.o: %.c
	gcc -g -Wall -I/home/vaio/image2/include -c $< -o $@
libfuncs.a:func1.o func2.o func3.o
	ar rv libfuncs.a func1.o func2.o func3.o
clean:
	rm *.o *.a
