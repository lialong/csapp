#include <stdio.h>

int uadd_ok(unsigned x, unsigned y);

void main(){
	printf("%d\n", uadd_ok(1, 2));
	printf("%d\n", uadd_ok(2147483648, 2147483648));
	printf("%d\n", uadd_ok(2147483648, 2147483647));
}

int uadd_ok(unsigned x, unsigned y){
	unsigned s = x + y;
	return s > x;
}
