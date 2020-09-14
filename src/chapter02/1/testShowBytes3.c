#include <stdio.h>
#include <string.h>

typedef unsigned char *bytePointer;

void showBytes(bytePointer start, size_t len) {
	size_t i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void main(){
	const char *s = "abcdef";
	showBytes( (bytePointer)s, strlen(s));
}
