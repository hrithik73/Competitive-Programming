#include<stdio.h>
#include<stdlib.h>

void ConsicutiveZeros(long long int n) {
	long long int count = 0;
	while (n != 0) {
		count = count + n / 5;
		n = n / 5;
	}
	printf("%lld\n", count);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long int n;
		scanf("%lld", &n);
		ConsicutiveZeros(n);
	}
}