#include <stdio.h>
int main() {
	int count=0;
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  count++;
  printf("Enter the number of rows (between 1 and 100): ");
  count++;
  scanf("%d", &r);
  count++;
  printf("Enter the number of columns (between 1 and 100): ");
  count++;
  scanf("%d", &c);
  count++;
printf("\nEnter elements of 1st matrix:\n");
count++;
count++;
  for (i = 0; i < r; ++i){
  count++;
  count++;
  count++;
    for (j = 0; j < c; ++j) {
    	count++;
      printf("Enter element a%d%d: ", i + 1, j + 1);
      count++;
      scanf("%d", &a[i][j]);
      count++;
    }
    count++;
}
count++;
  printf("Enter elements of 2nd matrix:\n");
  count++;
  for (i = 0; i < r; ++i){
  	count++;
  	count++;
  	count++;
  
    for (j = 0; j < c; ++j) {
    	count++;
      printf("Enter element b%d%d: ", i + 1, j + 1);
      count++;
      scanf("%d", &b[i][j]);
      count++;
    }
    count++;
}
count++;
  for (i = 0; i < r; ++i){
  count++;
    for (j = 0; j < c; ++j) {
    	count++;
      sum[i][j] = a[i][j] + b[i][j];
    }
    count++;
}
count++;
  printf("\nSum of two matrices: \n");
  count++;
  for (i = 0; i < r; ++i){
  
    for (j = 0; j < c; ++j) {
    	count++;
      printf("%d   ", sum[i][j]);
      count++;
      if (j == c - 1) {
      	count++;
        printf("\n\n");
      }
      count++;
    }
    count++;
}
count++;

printf("%d time complexity :",count);
  return 0;
}
