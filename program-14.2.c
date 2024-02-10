#include<stdio.h>

main()
{
	
	int row,col,i,j,sum=0;
	
	printf("Enter number of row :- ");
	scanf("%d",&row);
	
	printf("Enter number of colums :- ");
	scanf("%d",&col);
	
	int a[row][col];
	int b[row][col];
	
	printf("Enter array A's elements :\n");
	for(i = 0;i < row;i++){
		
		for(j = 0; j < col;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	
	printf("\nEnter array B's elements :\n");
	for(i = 0;i < row ;i++){
		
		for(j = 0; j < col;j++){
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	
	printf("\nArray C is :\n");	
	for(i = 0;i < row ;i++){
		for(j = 0; j < col;j++){
			
			sum = a[i][j] + b[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}	
	
}
