/*Problem 7
 *
 *By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 What is the 10 001st prime number?
 * 
 * */

#include<stdio.h>
#include<math.h>

int prime(double n) {
	int i, t, sign;
	if(n==1)
		return 2;
	else if(n==2)  //this is important
		return 3;
	else {
		for(t=2; t<=(int)sqrt(n); t++) {
			if((int)n%t==0) {
				sign = 0;
				break;
			}
			else {
				sign = 1;
			}
		}
		if(sign==1)
			return n;
		else return 0;
	}
}

int main() {
	double i;
	i = 1.0;
	int sum;
	sum = 0;
	int result[20000];
	int j, k;
	j = 0;
	while(prime(i)<171110) {
		if(prime(i)!=0) {
			result[j] = prime(i);
			j += 1;
			if(j==10001)
				break;
		}
			//printf("%d ", prime(i));
		sum += prime(i);
		i += 1.0;
	}
	printf("the %d-th's result is:%d \n", j, result[j-1]);
	return 0;
}
