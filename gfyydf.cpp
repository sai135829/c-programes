#include<stdio.h>
int cou(int);
main(){
	int n,c,i,res;
	printf("enter your digit");
	scanf("%d",&n);
	res=cou(n);
	printf("no of digits is %d",res);
}
int cou(int a)
{
	int c=0,i;
	for(i=0;a>0;i++){
		a=a/10;
		c=c+1;
		}
		return c;
	}

