#include<stdio.h>
int main()
{
	int t;
	long long int x,tot=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&x);
		tot+=x;
	}
	printf("%lld",tot);
	return 0;
}
