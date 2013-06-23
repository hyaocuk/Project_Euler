/*Problem 7
 *
 *By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 What is the 10 001st prime number?
 * 
 * */

#include<stdio.h>
#include<math.h>

int isPrime(long n) {
	int r;
	int f;
	if(n==1)
		return 0;
	else if(n<4)
		return 1;
	else if(n%2==0)
		return 0;
	else if(n<9)
		return 1;
	else if(n%3==0)
		return 0;
	else {
		r = (int)sqrt((double)n);
		f = 5;
		while(f<=r) {
			if(n%f==0)
				return 0;
			else if(n%(f+2)==0)
				return 0;
			f += 6;
		}
		return 1;
	}
}

int main() {
	int candidate;
	candidate = 1;
	int count;
	count = 1;
	while(count<10001) {
		candidate += 2;
		if(isPrime(candidate)==1) {
			count += 1;
		}
	}

	printf("the result is: %d\n", candidate);

	return 0;
}
