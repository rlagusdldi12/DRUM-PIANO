%.o: %.c
	gcc -g -Wall -I/home/vaio/project/include -c $< -o $@
main:main.o
	gcc -o main -L/home/vaio/project/lib main.o -lfuncs
clean:
	rm *.o main
