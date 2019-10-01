#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",n);
	do{
		if(n%2!=0)
		{
			n=n*3+1;
		}
		else if(n%2==0)
		{
			n=n/2;
		}
		printf("%d ",n);
	}while(n!=1);
	return 0;
}
