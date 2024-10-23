#include <stdio.h>

int main(){
	int i,n;
	printf("enter the number till which odd numbers are to be printed");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		printf("%d\n",i);
	};
	return 0;
}
