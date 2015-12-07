%.o: %.c
	gcc -g -Wall -I/home/vaio/HW/include -c $< -o $@
main:main.o
	gcc -o main -L/home/vaio/HW/lib main.o -lfuncs
clean:
	rm *.o main
