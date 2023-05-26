#include "header.h"

//this is for base task

//~ void init(ParityArray* pArr) {
	//~ pArr->even_idx = 0;
	//~ pArr->odd_idx = ARRAY_SIZE -1;
//~ }


void init(ParityArray* pArr, int size) {
	pArr->arr = (int*) malloc(size*sizeof(int));
	pArr->even_idx = 0;
	pArr->odd_idx = size -1;
}

void insert(ParityArray* pArr, int num) {
	if(num % 2 ==0) {
		pArr->arr[pArr->even_idx] = num;
		pArr->even_idx+=1;
	}
	else {
		pArr->arr[pArr->odd_idx] = num;
		pArr->odd_idx-=1;
	}

}

// this function is for base task, that is why it doesn't work properly when user puts size different than ARRAY_SIZE

void print(ParityArray* pArr) {
	for(int i=0;i < pArr->even_idx;i++) {
		printf("%d\n",pArr->arr[i]);
	}
	
	for(int i = pArr->odd_idx+1;i<ARRAY_SIZE;i++) {
		printf("%d\n",pArr->arr[i]);
	}
}

void destruct(ParityArray* pArr) {
	free(pArr->arr);
}

void dump(ParityArray* pArr, char* filename, int size) {
	FILE *file = fopen(filename,"w");
	if(file ==NULL) return;
	for(int i=0;i < pArr->even_idx;i++) {
		fprintf(file,"%d\n",pArr->arr[i]);
	}
	for(int i = pArr->odd_idx+1;i < size;i++) {
		fprintf(file,"%d\n",pArr->arr[i]);
	}
	
}
