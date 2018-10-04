run: subarr
	./subarr

subarr: subarr.c
	gcc -Wall -std=c11 subarr.c -o subarr

build: subarr
