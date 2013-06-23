/*Problem 3
 *
 *The prime factors of 13195 are 5, 7, 13 and 29.

 What is the largest prime factor of the number 600851475143 ?
 * 
 * */

#include<stdio.h>
#include<math.h>

int isPrime(unsigned long long n) {
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
	unsigned int candidate;
	candidate = 1;
	unsigned long long temp;
	temp = 600851475143;
	while(temp!=1) {
		candidate += 2;
		if(isPrime(candidate)==1) {
			if(temp%candidate==0) {
				temp = temp / candidate;
			}
		}
	}

	printf("\nthe result is: %d\n", candidate);
	return 0;
}
