/* write a program to enter string and print string with total number vowels.
Date:-03-03-2022
Name:-singh shivam kumar*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int vowels=0,count=0;
  char str[100],c;
  clrscr();
  printf("enter the value:-");
  scanf("%[^\n]",str);

  while(str[count]!='\0')
  {
   c=str[count];
   if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
   {
   vowels++;
   printf("\nvowel:-%c",c);
  }
   count++;
 }
 printf("\n");
 printf("NUMBER OF VOWELS: %d\n",vowels);
 getch();
}
