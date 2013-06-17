/*Problem 5
 *
 *2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * 
 * */

#include<stdio.h>

int main() {
	int i;
	int n;
	for(i=20; ; i++) {
		n = i%1 + i%2 + i%3 + i%4 + i%5 + i%6 + i%7 + i%8 + i%9 + i%10 + i%11 + i%12 + i%13 + i%14 + i%15 + i%16 + i%17 + i%18 + i%19 + i%20;
		if(n==0) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
