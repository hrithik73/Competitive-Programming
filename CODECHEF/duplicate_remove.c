/*Program to remove the duplicate from an array 
Here we sort  the array and them compare the elements with it's 
consicutive When the it's not equal with it's consicutive next 
element then store it in an another array.
*/
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void selectionsort(int A[],int n)
{
	int i,j,min_index;

	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for (j=i+1;j<n;j++)
		{
			if(A[j]<A[min_index])
			 min_index=j;

		}
		swap(&A[i],&A[min_index]);
	}
}

int main()
{
   int A[100],B[100],i,x,y,n;
   printf("Enter The Number of Elements\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&A[i]);
   selectionsort(A,n);
   int j=0;
   for (i = 0; i < n-1; i++)
   {
     if(A[i]!=A[i+1])
     {
         B[j]=A[i];
         j++;
     }
   }
   B[j]=A[n-1];
//    printf("Sorted Array is :\n");
   for (int k=0; k<=j;k++)
   {
   	printf("%d ",B[k]);
   }

}