#include<stdio.h>
void main(){
	
	int i,j, n,m, max, min;

	 printf("Enter size of row:- ");
	 scanf("%d",&n);
	 printf("Enter size of column:- ");
	 scanf("%d",&m);
	 
	 	int a[n][m];
	 	
	for(i=0; i<n; i++){
	for(j=0; j<m; j++){
	
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		}
	}
	max= a[0][0];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}

printf("\n maximum number is :- %d",max);
	
	
		min= a[0][0];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}

printf("\n  manimum number is :- %d",min);
	
	
	
}