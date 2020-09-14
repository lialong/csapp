#include <stdio.h>

typedef unsigned char *bytePointer;

void showBytes(bytePointer start, size_t len) {
	size_t i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void showInt(int x) {
	showBytes( (bytePointer)&x, sizeof(int));
}

void showFloat(float x) {
	showBytes( (bytePointer)&x, sizeof(float));
}


void showPointer(void *x) {
	showBytes( (bytePointer)&x, sizeof(void *));
}

void testShowBytes(int val){
	int iVal = val;
	float fVal = (float) iVal;
	int *pVal = &iVal;
	showInt(iVal);
	showFloat(fVal);
	showPointer(pVal);
}

void main(){
	testShowBytes(12345);
}
