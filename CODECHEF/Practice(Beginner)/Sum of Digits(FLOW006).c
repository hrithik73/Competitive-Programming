#include<stdio.h>

int SumD(long int n)
{

  int digit = 0, sum = 0;
  long int i;
  for (i = n; i > 0; i = i / 10)
  {
    digit = i % 10;
    sum = sum + digit;
  }
  return sum;
  //printf("%d",sum);
}

int main()
{
  int  t;
  long int N;
  scanf("%d", &t);
  int A[t];
  for (int i = 0; i < t; i++)
  {
    scanf("%ld", &N);
    A[i] = SumD(N);
  }
  for (int i = 0; i < t; i++)
    printf("%d\n", A[i]);

  return 0;
}