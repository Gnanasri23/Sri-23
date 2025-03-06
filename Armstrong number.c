#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num,sum=0;
	int original=n;
	while(n!=0)
	{
		num=n%10;
		sum=sum+num*num*num;
		n=n/10;
	}
	if(sum==original)
	printf("ARMSTRONG NUMBER");
	else
	printf("NOT AN ARMSTRONG NUMBER");
}
