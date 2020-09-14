#include <stdio.h>

long cal_odd_even(unsigned long);

void main(){
	unsigned long num;
	scanf("%d", &num);
	int a = cal_odd_even(num);
	
	printf("%d:%d", num, a);
}

long cal_odd_even(unsigned long x){
	long val = 0;
	while(x != 0){
		val ^= x;
		x >>= 1;
	}
	return val&1;
}
