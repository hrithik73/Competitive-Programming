#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void PUSH(int A[], int top)
{
	int temp, item;
	printf("Enter the Element to inser at top of the Stack");
	scanf("%d", &item);
	if (A == NULL)
		printf("Stack is Empty");
	else
	{
		temp = top;
		top++;
		A[top] = item;
	}
}
void POP(int A[], int top)
{
	int item;
	A[top]=item;
	top--;
	printf("Top Item Deleted");
}

void Display(int A[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	printf("\n");
}

int main()
{
	int A[] = {1, 8, 2, 4, 3, 9};
	int n = sizeof(A) / sizeof(A[0]), choice, top;
	top = n - 1;
	while (1)
	{
		printf("|--------------------------------------------------|\n");
		printf("|Enter The Choice                               >>>|\n");
		printf("|1).PUSH                                        >>>|\n");
		printf("|2).POP                                         >>>|\n");
		printf("|3).Display                                     >>>|\n");
		printf("|4).Exit                                        >>>|\n");
		printf("|--------------------------------------------------|\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			PUSH(A, top);
			break;
		case 2:
			POP(A, top);
			break;
		case 3:
			Display(A, top);
		}
	}
}
