
int main() {
    int n, r, rev = 0;
    printf("Enter integer to be reversed: ");
    scanf("%d", &n);    
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
    printf("Reversed number: %d", rev);
    return 0;
}

int main(){
	int count=0,n; 
	printf("enter integer whose length is to be found");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}

