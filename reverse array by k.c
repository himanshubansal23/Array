#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value after which elements to be reversed\n");
	scanf("%d",&k);
	for(i=0;i<n;i+=k)
	{
		if((i+k)>n)
		{
			k=n-i;
		}
		for(j=0;j<k/2;j++)
		{
			int x=a[i+j];
			a[i+j]=a[i+k-1-j];
			a[i+k-1-j]=x;
		}
	}
	printf("Your ans is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
