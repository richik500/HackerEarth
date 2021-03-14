#include<stdio.h>
int main()
{
	long long int t,r,x,total=0;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&r,&x);
		if((100*x)>=(2*r*22/7))
			{total+=1;}
	}
	printf("%lld",total);
	return 0;
}
