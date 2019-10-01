#include<iostream>
using namespace std;

int main()
{
	long int i,n,s,q=0;
	cin>>n;
	long int a[n-1];
	s=n*(n+1)/2;
		for(i=0;i<n-1;i++)
	{
		cin>>a[i];
		q+=a[i];
	}
	printf("%ld",s-q);
}
