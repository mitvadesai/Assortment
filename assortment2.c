#include<stdio.h>
 main()
{
	int row,column,large;
	
	printf("enter the row size : ");
	scanf("%d",&row);
	printf("enter the column size : ");
	scanf("%d",&column);
	
	int i,j,a[row][column];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			large=a[i][j];
		}
	}
	printf("the largest element is : %d\n",large);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			large>a[i][j];
		}
	}	
}