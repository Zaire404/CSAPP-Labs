#include <stdio.h>
int fitsBits(int x, int n) 
{
	/********* Begin *********/
	n--;
	x = (x >> n) << n;
	printf("%d\n", x);
    if (!x) return 1;
    return 0;
	/********* End *********/	
}

int main() {
	printf("%d", fitsBits(0x7fffffff, 31));
}