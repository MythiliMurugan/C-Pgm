#include<stdio.h>
#include<conio.h>
void main()
{
int a, b=1;
printf("Enter the number");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
b=b*i;
}
printf("Factorial value=%d",b);
}
