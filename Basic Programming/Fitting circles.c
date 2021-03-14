#include<stdio.h>
int main()
{
	long long int t,l,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&l,&b);
		(l>b)?printf("%lld\n",l/b):printf("%lld\n",b/l);
	}
	return 0;
}
