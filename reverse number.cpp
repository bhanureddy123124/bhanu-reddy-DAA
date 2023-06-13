#include <stdio.h>

int main() {

  int n, reverse = 0, remainder,count=0;
  printf("Enter an integer: ");
  count++;
  scanf("%d", &n);
  count++;

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);
  count++;
  printf("time complexity %d",count);

  return 0;
}

