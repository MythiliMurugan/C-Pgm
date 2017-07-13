#include <stdio.h>

int main(void) {
	int n,i,rev,a;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		i=n%10;
		rev=rev+(i*i*i);
		n=n/10;
	}
	if(a==rev)
	printf("Number is armstrong");
	else
	printf("Number is not armstrong");
	return 0;
}
