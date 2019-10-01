#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	long long int n,max=0,j,i,l; 
	char d[1000001];
	gets(d);
	n=strlen(d);
	for(i=0;i<n;i++)
	{
		l=1;
		for(j=i+1;j<n;j++)
		{
			if(d[i]!=d[j])
				break;
			else
				l++;
		}
		if(max<=l)
			max=l;
		i=i+l-1;
	}	
	cout<<max;
	return 0;
}
