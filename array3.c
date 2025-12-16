#include <stdio.h>
int main()
{
	int a[100],n,i,x,cobra=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
	  {
	     printf("element in found");
	     cobra=1;	
      }
	}
	if(cobra==0)
	printf("element is not found");
	return 0;
}
