/*Problem 6
 * 
 * The sum of the squares of the first ten natural numbers is,
 *
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * */

#include<stdio.h>

int main() {
	int i, n;
	n = 100;
	int sum1, sum2;
	sum1 = 0;
	sum2 = 0;
	
	/*for(i=1; i<=100; i++) {
		sum1 += i*i;
		sum2 += i;
	}
	printf("sum1 is: %d\n", sum1);
	printf("sum2 is: %d\n", sum2*sum2);
	*/

	sum1 = n*(n+1)*(2*n+1) / 6;
	sum2 = ((1+n)*n/2)*((1+n)*n/2);
	printf("sum1 is: %d\n", sum1);
	printf("sum2 is: %d\n", sum2);

	printf("the difference is: %d\n", sum2-sum1);
	return 0;
}
