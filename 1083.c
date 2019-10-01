#include<stdio.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a[n-1];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=0;j<n-1;j++)
		{
			if(i==a[j])
			{
				k=0;
				break;
			}
		}
		if(k==1)
			break;
	}
	printf("%d",i);
	return 0;
}
