default: dsatest

dsatest: main.o dsa.o
	gcc -o dsatest main.o dsa.o

main.o: main.c
	gcc -c -g main.c

dsa.o: dsa.c
	gcc -c -g dsa.c

clean:
	rm main.o dsa.o dsatest



