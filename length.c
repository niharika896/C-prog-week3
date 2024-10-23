#include <stdio.h>

int main(){
	long n;
	int count=0;
	printf("enter integer whose length is to be found");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}

