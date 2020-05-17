#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,digit=0,rev=0;
		scanf("%d",&a);
		for (int i = a; i>0;i=i/10)
		{
			digit=i%10;
			rev=(rev*10)+digit;

		}
		printf("%d\n",rev);
	}
}