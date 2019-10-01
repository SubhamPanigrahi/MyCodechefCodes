#include<iostream>
using namespace std;

int main()
{
	long int n;
	cin>>n;
	cout<<n<<" " ;
	do{
		if(n%2!=0)
		{
			n=n*3+1;
		}
		else if(n%2==0)
		{
			n=n/2;
		}
		cout<<n<<" " ;
	}while(n!=1);
	return 0;
}
