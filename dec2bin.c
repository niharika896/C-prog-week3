#include <stdio.h>

int main() {
    int n, r,bin=0;
    printf("Enter binary number");
    scanf("%d", &n);    
    while (n!=1 && n!=0){
        r = n % 2;
        bin=bin*10+r;
        n = n / 2;
    }
    printf("%d",bin);
    return 0;
}
