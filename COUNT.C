#include<stdio.h>
#include<conio.h>
void main ()
{
int a;
int b;

clrscr();
b = 0;
printf("Enter any number : ");
scanf("%d",&a);

while(a != 0){
       a /= 10;
       b++;
}

printf("Total number of digits : %d\n",b);

getch();

}