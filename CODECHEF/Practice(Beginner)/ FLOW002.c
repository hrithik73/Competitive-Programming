//Problem Name :-Find Remainder
//Author :-Hrithik Singh
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
#define MAX_LIMIT 10000
#define fl(i,n) for(int i=0;i<n;i++)
inline int read()
{
	char c;
	int n = 0;
	while ((c = getchar_unlocked()) < 48)
		;
	n += (c - '0');
	while ((c = getchar_unlocked()) >= 48)
		n = n * 10 + (c - '0');
	return n;
}
int main()
{
	int t;
	t = read();
	while (t--) {
		int a = read();
		int b = read();
		int c;
		c = a % b;
		printf("%d\n", c);
	}
}