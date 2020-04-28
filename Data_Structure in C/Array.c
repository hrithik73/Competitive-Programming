/*This is Program for implimentation of all the operation on the A 1D Array like insertion,Deletion,Linear search And binary Search*/
//Programmed by-Hrithik Singh 13 Jan 2020//
#include<stdio.h>
#include<stdlib.h>

#define maxsize 100

void insert(int A[] , int item);
void Delete(int A[]);
void lsearch(int A[], int item);
void bisearch(int A[], int bitem);

int A[maxsize], n, choice, item, i, bitem;

int main()
{
	int i;
	printf("Enter The no. of Elements in Array");
	scanf("%d", &n);
	printf("Enter The Elements in Array:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	while (1) {
		printf(">>>>>Enter The Operation you want to pereform on Array>>\n");
		printf(">>>>>1).Insertion>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf(">>>>>2).Deletion>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf(">>>>>3).Linear Search>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf(">>>>>4).Binary Search>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter The element to insert");
			scanf("%d", &item);
			insert(A, item);
			break;
		case 2:
			//printf("Enter The Element to Delete");
			//scanf("%d",&item);
			Delete(A);
			break;
		case 3:
			printf("Enter The Element to search");
			scanf("%d", &item);
			lsearch(A, item);
			break;
		case 4:
			printf("Enter The Element to Search by binary Search");
			scanf("%d", &bitem);
			bisearch(A, bitem);
			break;
		default :
			printf("Wrong choice!");
			break;
		}
		return 0;
	}
}

void insert(int A[], int item)
{
	int pos, i;
	printf("Enter The Position at the elements to insert");
	scanf("%d", &pos);
	for (i = (n - 1); i >= pos; i--)
		A[i + 1] = A[i];

	A[pos] = item;

	printf("New Array is :\n");
	for (i = 0; i <= n; i++)
		printf("%d ", A[i]);
}
void Delete(int A[])
{
	int pos;
	printf("Enter the position to Delete");
	scanf("%d", &pos);
	item = A[pos];
	for (i = pos; i < n; i++)
		A[i] = A[i + 1];

	printf("New Array is:\n");
	for (i = 0; i < n - 1; i++)
		printf("%d ", A[i]);
	//printf("Deleted Element is %d",item);

}
void lsearch(int A[], int item)
{
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		if (A[i] == item) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("Search Succesfull!\nItem Found at %d", i + 1);
	else
		printf("Item not found");

}
void bisearch(int A[], int item)
{

	int beg = 0, end = n - 1, mid, flag = 0;
	while (beg <= end)
	{
		mid = (beg + end) / 2;
		if (A[mid] == item)
		{
			flag = 1;
			break;
		}
		else if (item < A[mid])
			end = mid - 1;
		else if (item > A[mid])
			beg = mid + 1;
	}
	if (flag == 1)
		printf("Search Succesfull\nItem Found at %d", mid);
	else
		printf("Search Unsuccesfull!\nMeans Item Not Found");
}
