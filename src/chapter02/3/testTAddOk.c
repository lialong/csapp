#include <stdio.h>

int tadd_ok(int x, int y);

void main(){
	printf("%d\n", tadd_ok(2147483647, 1));
	printf("%d\n", tadd_ok(-2147483648, -1));
	printf("%d\n", tadd_ok(214748364, 1));
}

int tadd_ok(int x, int y){
	int s = x + y;
	if(x > 0 && y > 0 && s < 0)
		return 0;
	if(x < 0 && y < 0 && s > 0)
		return 0;
	return 1;
}
