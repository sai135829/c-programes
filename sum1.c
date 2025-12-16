#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n number");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("addition in=%d",sum);
	return 0;
    }
