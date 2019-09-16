#include<stdio.h>
int main()
{
int a[]={1,3,4};
int b[]={5,9,8};
int x[11]={0};
int i,j;
for(i=0;i<3;i++)
{
	x[a[i]]++;
	x[b[i]+1]--;
}
int max=0,ds=0;
for(i=0;i<11;i++)
{
	ds+=x[i];
	if(max<ds)
	{
		max=ds;
		j=i;
	}
}
printf("%d",x[j]);
return 0;
}
