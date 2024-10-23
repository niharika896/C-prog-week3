#include <stdio.h>

int main(){
	int n,a,b;
	printf("enter the number");
	scanf("%d",&n);
	a=n%10;
	while(n!=0){
		b=n%10;
		n=n/10;
	};
	printf("the sum is %d",a+b);
	return 0;
}

