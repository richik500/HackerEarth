#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int div5=a/5;
	int rem5=a%5;
	if(rem5==0) printf("%d",div5);
	else printf("%d",div5+1);
	return 0;
}
