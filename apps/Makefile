%.o: %.c
	gcc -g -Wall -I/home/vaio/image2/include -c $< -o $@
main:main.o
	gcc -o main -L/home/vaio/image2/lib main.o -lfuncs
clean:
	rm *.o main
