//jiggling Algorithm for Array Rotation
#include<stdio.h>
int gcd(int m,int n){
	if(n==0)
	return m;
	else 
	return gcd(m,n%m);
}

void Arrayrotate(int A[],int k,int n){
int i,j,temp=0,d=0,GCD=gcd(n,k);
for(i=0;i<GCD;i++){
  	temp=A[i];
  	j=i;
  	while(1){
  		d=(j+k)%n;
  		if(d==i)
  			break;
  		A[j]=A[d];
  	}
  	A[j]=temp;
  } 

}


int main()
{
	int A[100],n,k;
	printf("Enter The No. of Elements In Array\n");
	scanf("%d",&n);
	printf("Enter the Elements Of Array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
    printf("Enter The k\n");
    scanf("%d",&k);
    Arrayrotate(A,k,n);
    for(int i=0;i<n;i++)
    	printf("%d",A[i]);
}
