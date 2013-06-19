/*Problem 4
 *
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 */

#include<stdio.h>

int main() {
	int i, j, max;
	max = 0;
	int a, b, c, d, e, f, g, r, product;
	for(i=999; i>=100; i--) {
		for(j=999; j>=100; j--) {
			product = i*j;
			if(product<100000) {
				a = product / 10000;
				r = product % 10000;
				b = r / 1000;
				r = r % 1000;
				c = r / 100;
				r = r % 100;
				d = r / 10;
				r = r % 10;
				e = r;
				//printf("%d %d %d %d %d ", a, b, c, d, e);
				if(a==e && b==d && product>max)
				{
					max = product;
					break;
				}
			}
			else if(product>=100000 && product<998002) {
				a = product / 100000;
				r = product % 100000;
				b = r / 10000;
				r = r % 10000;
				c = r / 1000;
				r = r % 1000;
				d = r / 100;
				r = r % 100;
				e = r / 10;
				r = r % 10;
				f = r;
				if(a==f && b==e && c==d && product>max) {
					max = product;
					break;
				}
			}
		}
	}
	printf("%d\n", max);

	return 0;
}
