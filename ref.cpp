#include<stdio.h>
void swap(int*,int* );
 main(){
	 int a=2,b=3;
	printf("before swapping a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nin main fun a=%d",a);
	printf("\nin main fun b=%d",b);
	
}
void swap(int *a,int *b)
{
	int tem;
	tem=*a;
	*a=*b;
	*b=tem;
	printf("\nin swap fun after swapping a=%d,b=%d",*a,*b);
}
