#include<stdio.h>
int big(int,int,int);
main(){
	int n1,n2,n3,res;
	printf("enter 3 numbers");
	scanf("%d%d%d",&n1,&n2,&n3);
	res=big(n1,n2,n3);
	printf("biggest number is %d",res);
}
int big(int n1,int n2,int n3)
{
int	res=(n1>n2)?((n1>n3)?n1:n3):(n2>n3)?n2:n3;
	return res;
}
