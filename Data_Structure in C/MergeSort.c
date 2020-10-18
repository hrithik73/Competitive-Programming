#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void Merge(int A[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m ;
	int temp1[n1], temp2[n2];
	for (int i = 0; i < n1; i++)
		temp1[i] = A[l + i];
	for (int j = 0; j < n2; j++)
		temp2[j] = A[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (temp1[i] <= temp2[j]) {
			A[k] = temp1[i];
			i++;
		}
		else {
			A[k] = temp2[j];
			j++;
		}
		k++;

	}
	while (i < n1) {
		A[k] = temp1[i];
		i++;
		k++;
	}
	while (j < n2) {
		A[k] = temp2[j];
		j++;
		k++;
	}

}


void MergeSort(int A[], int l, int r) {
	int m = l + (r - l) / 2;
	if (l < r) {
		MergeSort(A, l, m);
		MergeSort(A, m + 1, r);

		Merge(A, l, m, r);
	}
}
void printFunction(int A[], int n) {
	for (int m = 1; m < n + 1; m++)
		printf("%d\n", A[m]);
}


int main() {
	int n, l, r;
	printf("Enter The No. of Elements in Array\n");
	scanf("%d", &n); //Take the size of the Array
	int A[n];
	printf("Enter The Array:\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]); //Input the Array
	l = 0, r = n;
	MergeSort(A, l, r);//Calling the Merge Sort Function
	printf("The Sorted Array is:\n");
	printFunction(A, n);
}
