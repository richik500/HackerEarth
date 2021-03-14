#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int sh,sm,eh,em;
		scanf("%d%d%d%d",&sh,&sm,&eh,&em);
		int S=sh*60+sm;
		int E=eh*60+em;
		printf("%d %d\n",(E-S)/60,(E-S)%60);
		/*if(em<sm) { em+=60; eh--;}  
		printf("%d %d\n",eh-sh,em-sm);*/
	}
	return 0;
}
