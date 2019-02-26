#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

void multiplicationTable(int row, int col, int arr[row][col]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < row; i++) {
    for (j = 0 ; j < col; j++) {
      arr[i][j] = i * j;
    }
  }
  return;
}

void reverseColumn(int row, int col, int arr[row][col], int arrInverse[row][col]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      arrInverse[i][j] = arr[i][j];
    }
  }
  for (j = 1; j < col / 2; j++) {
    for (i = 1; i < row; i++) {
      int tempVal = arrInverse[i][j];
      arrInverse[i][j] = arrInverse[i][col - j];
      arrInverse[i][col - j] = tempVal;
    }
  }
  return;
}
