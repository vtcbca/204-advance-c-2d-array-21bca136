/* write a program to enter 3 by 3 matrix 2d array
 |100|
 |010|-check diagonal
 |001|
Date:-03-03-2022
Name:-singh shivam kumar */

#include<stdio.h>
#include<conio.h>
//In a square matrix if all the main diagonal elements are 1's and
//all the remaining elements are 0's is called an Identity Matrix.

void main()
{
    int arr1[10][10];
    int r1,c1;
    int i, j, yn =1;
    clrscr();
    printf("\n\n Check whether a given matrix is an identity matrix :\n ");
    printf("-----------------------------------------------------------\n");
    printf("Input number of Rows for the matrix :");
    scanf("%d", &r1);
    printf("Input number of Columns for the matrix :");
    scanf("%d",&c1);
    printf("Input elements in the first matrix :\n");
    for(i=0; i<r1; i++)
    {
	for(j=0; j<c1; j++)
	{
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&arr1[i][j]);
	}
    }
    printf("The matrix is :\n");
    for(i=0; i<r1; i++)
    {
	for(j=0; j<c1 ; j++)
	    printf("% 4d",arr1[i][j]);
	printf("\n");
    }

    for(i=0; i<r1; i++)
    {
	for(j=0; j<c1; j++)
	{
	    if(arr1[i][j] != 1 && arr1[j][i] !=0)
	    {
		yn = 0;
		break;
	    }
	}
    }

    if(yn == 1 )
	printf(" The matrix is a diagonal Matrix.\n\n");
    else
	printf(" The matrix is not an diagonal matrix.\n\n");
	getch();
}
