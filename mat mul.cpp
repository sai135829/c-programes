#include<stdio.h>
int main (){
	int r1,r2,c1,c2,i,j;
	printf("enter r1,c1 values");
	scanf("%d%d",&r1,&c1);
	printf("enter r2,c2 values");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	printf("enter m1 values\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d%d",&a[i][j]);
		}
	}
	printf("enter m2 values\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d%d",&b[r2][c2]);
		}
	}
	int c[r1][c2],k;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			c [i][j]=0;
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				c[i][j]=c[i][j]+a[i][k]+b[k][j];
			}
		}
	}
	printf("resultant matrix is\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d%d",c[i][j]);
		}
	}
	}

