#include<stdio.h>
int main()
{
	int n,rev=0,num;
	scanf("%d",&n);
num=n;
	while(n!=0)
	{
	
		rev=rev*10+n%10;
		n=n/10;
	}
	if(rev==num)
	printf("the given number is palindrome");
	else
	printf("not a palindrome");
	return 0;
}
