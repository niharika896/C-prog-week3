#include <stdio.h>

int main(){
	int i,n,p=1;
	printf("enter number whose factorial is to be found");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		p=p*i;
	};
	printf("The factorial is %d",p);
	return 0;
}

