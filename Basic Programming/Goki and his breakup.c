#include<stdio.h>
int main()
{
int x,y,n;
scanf("%d%d",&n,&x);
while(n--)
{
	scanf("%d",&y);
	y>=x?printf("YES\n"):printf("NO\n");
}
}
