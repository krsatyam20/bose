/*
Swap the number
	=> using third variable
	=> Using Without third variable

a=10
b=20

   After your program
   a=20
   b=10

*/
#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int a=10 ;
int b=20;
printf("=======Befor Swap=====\n");
printf("%d %d",a,b);

a=a+b;
b=a-b ;
a=a-b;

printf("\n=======Befor Swap=====\n");
printf("%d %d",a,b);



getch();
}
