#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, i, j;
		int count = 0;
		cin>>n;
		long long int a[n];
		int b[n] = {0};
		for(i = 1; i<=n; i++)
		{
			cin>>a[i];
		}
		
		for(i = 1; i<=n; i++)
		{
			for(j=i+1; j<=n; j++)
			{
				if(a[i]!=a[j])
				{
					b[i] = n - j + 1;
					break;
				}
			}
			
		}
		b[n] = 0;
		for(i=1; i<=n; i++)
		{
			cout<<b[i]<< " ";
			
		}
		
		cout<<"\n";
		
		
	}
	return 0;
}

