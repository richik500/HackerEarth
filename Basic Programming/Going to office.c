#include<stdio.h>
int main()
{
	long long int D,OC,OF,OD,CS,CB,CM,CD;
	scanf("%lld",&D);
	scanf("%lld %lld %lld",&OC,&OF,&OD);
	scanf("%lld %lld %lld %lld",&CS,&CB,&CM,&CD);
	long long int d1=OC+(D-OF)*OD;
	long long int d2=CB+(D/CS)*CM+D*CD;
	if(d1<=d2)
	printf("Online Taxi\n");
	else
	printf("Classic Taxi\n");
}
