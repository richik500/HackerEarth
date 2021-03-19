#include<stdio.h>
int main()
{
	char str[9];
	scanf("%s",str);
	if(str[2]=='A' || str[2]=='E' || str[2]=='I' || str[2]=='O'  ||str[2]=='U' || str[2]=='Y') 
		{ printf("invalid");  }
	else if( (str[0]+str[1])%2 != 0 || (str[3]+str[4])%2 != 0 ||   (str[4]+str[5])%2 != 0  || (str[7]+str[8])%2 != 0  )
	{ printf("invalid"); }
	else
	{ printf("valid");  }
	return 0;
}
