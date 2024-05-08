#include<stdio.h>
main(){
	
	int i,j,row,column;

	printf("Enter size of row :  ");
	scanf("%d",&row);
	printf("Enter size of column :  ");
	scanf("%d",&column);
	 
	int a[row][column];
	 	
	for(i=0;i<row;i++){
	for(j=0;j<column;j++){
	
		printf("Enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
		for(i=0; i<row; i++){
			for(j=0;j<column;j++){
				
				printf("%d",a[i][j]);
	    	}
	    	printf("\n");
		}
		printf("\n");
		
		printf("Transpose matrix is\n : ");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			
			printf("%d",a[j][i]);
		}
	    	printf("\n");
		}
}