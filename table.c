#include <stdio.h>

int main(){
	int i=1,n;
	printf("enter number whose multiplication table is to be printed");
	scanf("%d",&n);
	while(i<=10){
		printf("%d X %d = %d\n",n,i,n*i );
		i++;
	}
	return 0;
}

