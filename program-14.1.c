#include<stdio.h>

main()
{
	int row,col,i,j,sum=0;
	float avg;
	
	
	printf("Enter number of row :- ");
	scanf("%d",&row);
	
	printf("Enter number of colums :- ");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(i = 0;i < row;i++){
		
		for(j = 0; j < col;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	for(i=0;i < row;i++){
	 	for(j=0;j< col;j++){
	 			sum=sum+arr[i][j]; 	
		 }
	
	}
	
	printf("sum of Array :- %d\n",sum);
	
	avg = sum / (row * col);
	printf("Average of an Array: %.2f",avg);
	
}
