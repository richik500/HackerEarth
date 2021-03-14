#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int l,r,s;
		long long int a,b;
		scanf("%lld %lld %lld",&l,&r,&s);
		b=r/s;
		if(l%s==0) {a=l/s;}
		else {a=(l/s)+1;}
		if(a<=b) printf("%lld %lld\n",a,b);
		else printf("-1 -1\n");
	}
	return 0;
}
