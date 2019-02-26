#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

void main() {
 
 int row = 11;
 int col = 11;
 int arr[row][col];
 int arrInverse[row][col];
 
 multiplicationTable(row, col, arr);
 reverseColumn(row, col, arr, arrInverse);
 
 int i = 1;
 int j = 1;
 for (i = 1; i < row; i++) {
  for (j = 1; j < col; j++) {
   printf("%d ", arr[i][j]);
  }
  printf("\n");
 }
 
 printf("\n");
 
 for (i = 1; i < row; i++) {
  for (j = 1; j < col; j++) {
   printf("%d ", arrInverse[i][j]);
  }
  printf("\n");
 }
 
 return;
}
