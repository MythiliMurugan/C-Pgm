#include <stdio.h>

int main(void) {
	int n,i,rev,a;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}
	if(a==rev)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	return 0;
}
