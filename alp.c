#include<stdio.h>
void main()
{
char a;
printf("Enter the Character:");
scanf("%c",&a);
if(((a>='a') && (a<='z'))||((a>='A') &&(a<='Z')))
printf("Character is alphabet");
else
printf("Character is not alphabet");
}
