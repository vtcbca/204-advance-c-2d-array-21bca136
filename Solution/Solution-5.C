/* write a program to enter 5 string & search user inputed string is availble or not avalible
Date:-03-03-2022
Name:-singh shivam kumar */

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,m=0;
 char a[5][20],b[20];

 clrscr();
 printf("enter the number :\n");
 for(i=0;i<5;i++)
  gets(a[i]);
   for(i=0;i<5;i++)
    puts(a[i]);
     clrscr();
      printf("the string which you want to search:");
       gets(b);
	for(i=0;i<5;i++)
	{
	 if(strcmp(a[i],b)==0)
	  m=1;
	}
	if(m==1)
	 printf("yes it's available in inputed string.");
	  else
	   printf("it's not available in inputed string.");
	   getch();
}
