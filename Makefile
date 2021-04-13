CC = gcc

default: dsatest

dsalib.a : dsa.o
	ar rcs libdsalib.a

dsa.o: dsa.c dsa.h
	$(CC) -c $< -o $@



