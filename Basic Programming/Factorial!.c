
#include <stdio.h>
int fact(int n)
{
	//int f=1;
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}
int main(){
	int num;
	scanf("%d", &num);   
	int f=fact(num);           			
	printf("%d",f);      
}

