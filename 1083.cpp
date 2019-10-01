#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n-1];
	for(i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	i=1;
	while(i<=n)
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
		i++;
	}
	cout<<i;
	return 0;
}
