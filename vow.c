#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("\n %c is a vowel ", c);
}
else
{printf("\n %c is a consonant",c);
}
}
