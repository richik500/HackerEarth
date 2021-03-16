#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	long long int arr[n],t;
	for(auto i=0; i<n; i++)
	    scanf("%lld", &arr[i]);
	t=arr[n-1]%10;
	if(t==0) {printf("Yes");}
	else { printf("No");}
    return 0;
}
