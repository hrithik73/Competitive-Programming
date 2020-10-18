#include <stdio.h>

int main(void) {
	// your code goes here
	int X;
	float Y, Fx, t = 0.5, D;
	scanf("%d", &X);
	Fx = X + t;
	scanf("%f", &Y);

	if (X % 5 == 0)
	{
		if (Y >= Fx)
		{

			Y = Y - Fx;

		}
	}
	printf("%f", Y);

	return 0;
}

