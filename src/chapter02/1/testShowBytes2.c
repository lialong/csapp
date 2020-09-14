#include <stdio.h>

typedef unsigned char *bytePointer;

void showBytes(bytePointer start, size_t len) {
	size_t i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void testShowBytes(int val){
	bytePointer valP = (bytePointer) &val;
	showBytes(valP, 1);
	showBytes(valP, 2);
	showBytes(valP, 3);
}

void main(){
	testShowBytes(0x87654321);
}
