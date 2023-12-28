#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter row size:");
	scanf("%d",&n);
	
	printf("Enter column size:");
	scanf("%d",&m);
	
	int a[n][m],b[n][m];
	int i,j;
	
	printf("Enter the value of A element:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the value of B element:\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
		printf("Enter b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
			}
	
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("addition of %d + %d : %d\n",a[i][j],b[i][j],a[i][j]+b[i][j]);	
         }
      }
      for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("subtraction of %d - %d : %d\n",a[i][j],b[i][j],a[i][j]-b[i][j]);	
         }	
      }
      for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("multiplication of %d * %d : %d\n",a[i][j],b[i][j],a[i][j]*b[i][j]);	
         }
		
      }
}
