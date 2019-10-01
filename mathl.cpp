#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n, i;
		cin>>n;
		long long int f = 1;
		for(i=1; i<=n; i++)
		{
			f = ((f%1000000007) * ((int)pow(i,(n-i+1))%1000000007))%1000000007;
		}
		cout<<f<<"\n";
		
	}	
	return 0;
}
