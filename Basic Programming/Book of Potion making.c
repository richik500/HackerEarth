#include<stdio.h>
int main()
{	
	long long int n,i=10,total=0,a,b;
	scanf("%lld",&n);
	if((n/1000000000)==0) { printf("Illegal ISBN"); return 0;}
	while(n!=0)
	{
		a=n%10;
		b=a*i;
		total+=b;
		n/=10;
		i--;
	}
	if(total%11==0)
		printf("Legal ISBN");
	else 
		printf("Illegal ISBN");
	return 0;
}
