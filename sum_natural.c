#include <stdio.h>

int main(){
	int i,n,sum=0;
	printf("enter n to find sum of n natural numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	};
	printf("%d",sum);
	return 0;
}

