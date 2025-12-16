#include <stdio.h>
int main ()
 {
 	int A[10][10],r,c,i,j;
 	printf("enter rows and columns");
 	scanf("%d%d",&r,&c);
 	printf("enter A matrix value");
 	for(i=0;i<r;i++)
 	{
 	for(j=0;j<c;j++)	
 	{
 		scanf("%d",&A[i][j]);
		 }	
	 }
 	printf("transpose matrix is \n");
 	for(i=0;i<r;i++)
 	{
 		for(j=0;j<c;j++)
	 {
	 	printf("%d",A[i][j]);
	 }
    printf("\n");
}
 return 0;	
 	
 	
 	
 	
 }
