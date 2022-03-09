/* Q3:- write a program to 3 by 3 matrix and print the multiplication
Date:-02-03-2022
Name:-singh shivam kumar */

#include<stdio.h>
#include<conio.h>
void main()
{
 int m1[3][3],m2[3][3],m3[3][3],i,j,k;
 //logic input value into 2d array
 clrscr();
 for(i=0;i<3;i++) // row
 {
  for(j=0;j<3;j++) // column
  {
   printf("\nenter the value m1[%d][%d]",i,j);
   scanf("%d",&m1[i][j]);
  }
 }
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\nenter the value m2[%d][%d]",i,j);
   scanf("%d",&m2[i][j]);
  }
 }
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  m3[i][j]=0;
  for(k=0;k<3;k++)
   {
   m3[i][j]+=m1[i][j]*m2[i][j];
  }
 }
  }
  // sum of matrix
  printf("----------------------:multiplication of matrix m1*m2=m3:-----------------------\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",m3[i][j]);
  }
   printf("\n");
 }
 getch();
}

