#include<iostream>
using namespace std;

int main()
{
	int t, i;
	cin>>t;
	int n[t];
	for(i=1; i<=t; i++)
	{
		cin>>n[i];
	}
	for(i=1; i<=t;i++)
	{
		for(int j=i; j<=t; j++)
		{
			if(n[j]<=n[i])
			{
				int temp;
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	
	
	for(i=1; i<=t; i++)
	{
		cout<<n[i]<<"\n";
	}
	return 0;

}
