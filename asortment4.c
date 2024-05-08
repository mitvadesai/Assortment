#include<stdio.h>
 main(){
	
	int i,j,row,column;

	printf("Enter size of row:- ");
	scanf("%d",&row);
	printf("Enter size of column:- ");
	scanf("%d",&column);
	 
	int a[row][column];
	 	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Enter a[%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int rowsum=0;
	int columnsum=0;
	int x,y;

  	printf("enter row number:- ");
 	scanf("%d",&x);
 	
	 for(i=0;i<row;i++){
        for(j=0;j<column;j++){
        	if(i==x){
        		printf("%d ",a[x][j]);
        		rowsum=rowsum+a[x][j] ;
			}
        }        
    }
    printf("\nsum of Elements of row = %d",rowsum);
    
    printf("\nenter column number:- ");
 	scanf("%d",&y);
  	
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
  				if(j==y){
        		printf("%d ",a[i][y]);
        		columnsum=columnsum+a[i][y] ;
			}
        }
    }
     printf("\nsum of Elements of col = %d",columnsum);    
}