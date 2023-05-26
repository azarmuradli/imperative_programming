#include <stdio.h>
#include "header.h"





int main() {
	
	ParityArray pArr;
	int size;
	printf("Enter size of ParityArray : ");
	scanf("%d",&size);
	init(&pArr,size);
	printf("Enter %d or less numbers for ParityArray. If you want to stop type -1 : ",size);
	for(int i = 0; i < size; i++) {
		int num;
		scanf("%d",&num);
		//terminate input taking from user when user puts -1
		if(num==-1) {
			break;
		}
		insert(&pArr,num);
	}
	print(&pArr);
	dump(&pArr, "elements.txt",size);
	destruct(&pArr);

	return 0;
}
