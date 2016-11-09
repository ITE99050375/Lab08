lab08:lab08.o
	gcc -o lab08 lab08.o
lab08.o:lab08.c
	gcc -c lab08.c
clean:
	rm *.o
