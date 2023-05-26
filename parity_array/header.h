
#ifndef PARITY
#define PARITY

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

// this is for base task

//~ typedef struct ParityArray {
	//~ int arr[ARRAY_SIZE];
	//~ int even_idx;
	//~ int odd_idx;

//~ }ParityArray;

typedef struct ParityArray {
	int *arr;
	int even_idx;
	int odd_idx;

}ParityArray;

void init(ParityArray* pArr, int size);

void insert(ParityArray* pArr, int num);

void print(ParityArray* pArr);

void destruct(ParityArray* pArr);

void dump(ParityArray* pArr, char* filename, int size);



#endif
