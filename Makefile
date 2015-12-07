%.o: %.c
	gcc -g -Wall -I/home/vaio/image2/include -c $< -o $@ `pkg-config --libs --cflags gtk+-2.0`
main:main.o
	gcc -o main -L/home/vaio/image2/lib main.o `pkg-config --libs --cflags gtk+-2.0` -lfuncs 
clean:
	rm *.o main
