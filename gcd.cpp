#include <stdio.h>
#include <stdlib.h>
int count=0;
int gcd(int a, int b) {
    if (a == 0){
    	count++;
        return b;
        count++;
}
    return gcd(b % a, a);
    count++;
}

int main() {
    int a, b;
    count++;
    printf("Enter two numbers: ");
    count++;
    scanf("%d %d", &a, &b);
    count++;
    int result = gcd(abs(a), abs(b));
    count++;
    count++;
    printf("GCD of %d and %d is %d\n", a, b, result);
    count++;
    printf("time complexity is %d",count);
    return 0;
}
