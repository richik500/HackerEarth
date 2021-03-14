#include<stdio.h>
int main()
{
	int t,gr,pr,n,S1,S2,i;
	scanf("%d",&t);
	while(t--)
	{	S1=S2=0;
		scanf("%d %d %d",&gr,&pr,&n);
		int a1[n], a2[n],t1,t2;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a1[i]);
			scanf("%d",&a2[i]);
			S1+=a1[i];
			S2+=a2[i];
		}
	t1=(S1*gr)+(S2*pr);
	t2=(S2*gr)+(S1*pr);
	//F=(t1<t2?t1:t2);
	// wrong in 2 cases : F=(S1<S2?S1:S1)*(gr>pr?gr:pr)+(S1>S2?S1:S2)*(gr<pr?gr:pr);
	printf("%d\n",t1<t2?t1:t2);
	}
	return 0;
}
