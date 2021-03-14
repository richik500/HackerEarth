#include<stdio.h>
int main()
{
	long long int t,n,m;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		if((m%n)==0)
		printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
