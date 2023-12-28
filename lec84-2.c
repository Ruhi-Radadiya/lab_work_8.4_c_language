#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter row size:");
	scanf("%d",&n);
	
	printf("Enter column size:");
	scanf("%d",&m);
	
	int a[n][m],sum;
	int i,j;
	
	printf("Enter the element:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		sum+=a[i][j];
		
    	}
	}
	printf("The sum is : %d\n",sum);	
}