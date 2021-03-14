#include<stdio.h>
int main()
{
	int t,x,y,z,flag=1;
	scanf("%d %d %d",&t,&x,&y);
	while(t--)
	{
		scanf("%d",&z);
		if((z>=x)&&(z<=y));
		else flag=0;
	}
	if(flag==1) printf("YES");
	else printf("NO");
	return 0;
}
