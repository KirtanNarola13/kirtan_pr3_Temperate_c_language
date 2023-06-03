#include<conio.h>
#include<stdio.h>
void main ()
{
int a;
int b;
int c;
int d;
clrscr();
printf("Enter the value of a :");
scanf("%d",&a);
b=a;
while(b>=10){
    b=b/10;
}
c=a%10;
d=b+c;
printf("The sum of first and last degit is  : %d",d);
getch();
}