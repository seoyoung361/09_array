#include <stdio.h>
#define ROWS 3
#define COLS 3


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   
    
void addMatrix(int A[][COLS], int B[][COLS],int C[][COLS])
{   
    int i;
    int j;
    
    for(i=0;i<ROWS;i++)
    {
	  
	 for(j=0;j<3;j++)
      C[i][j]=A[i][j] + B[i][j];
	 
}

}


void printMatrix(int A[][COLS])
{
	int i;
	int j;

	
	for(i=0;i<ROWS;i++){
		for(j=0;j<3;j++)
		 printf("%i ",A[i][j]);
	printf("\n");	 
	}
	
}

int main(void) {
	
   int A[ROWS][COLS]={
     {2,3,0},
     {8,9,1},
     {7,0,5}};
     
   int B[ROWS][COLS]={
     {1,0,0},
     {0,1,0},
     {0,0,1}};
	
    int C[ROWS][COLS];
    
    addMatrix(A,B,C);
    printMatrix(C);
	 
	 
	return 0;
}
