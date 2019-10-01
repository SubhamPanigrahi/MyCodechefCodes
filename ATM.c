#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		int sum = 0;
		for(n;n>0;n/=10)
		{
			sum = sum + (n%10);			
		}
		cout<<sum;
	}
	return 0;
}
