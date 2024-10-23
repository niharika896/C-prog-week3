#include <stdio.h>

int main(){
	int n,a=0,b=1,c,i=0;
	printf("enter n to find out the nth fibonacci number:");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++){
		c=a+b;
		a=b;
		b=c;				
	};
	printf("the %dth fibo term is %d",n,c);
	return 0;
}

