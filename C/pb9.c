/*Problem 9
 *
 *A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

 a2 + b2 = c2
 For example, 32 + 42 = 9 + 16 = 25 = 52.

 There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 Find the product abc.
 * 
 * */


#include<stdio.h>

int main() {
	int i, j, k, sign;
	sign = 0;
	for(i=1; i<1000; i++) {
		for(j=1; j<1000; j++) {
			for(k=1; k<1000; k++) {
				if(j>i && k>j) {
					if(i+j+k==1000 && i*i+j*j==k*k) {
						printf("the result is%d\n", i*j*k);
						sign = 1;
						break;
					}
				}
			}
			if(sign==1)
				break;
		}
		if(sign==1)
			break;
		//printf("%d ", i);
	}

	return 0;
}
