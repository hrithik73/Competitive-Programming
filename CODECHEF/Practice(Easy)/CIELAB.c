//Ciel and A-B Problem

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int n1, n2, diff = 0, newdiff, lastDigit;
	scanf("%d%d", &n1, &n2);
	diff = n1 - n2;
	newdiff = diff - 1;
	lastDigit = newdiff % 10;
	if (lastDigit == 0)
		newdiff = diff - 100;

	printf("%d\n", newdiff);

}
