#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

void multiplicationTable(int row, int col, int arr[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0 ; j < col; j++) {
      arr[i][j] = i * j;
    }
  }
  return;
}

void reverseColumn(int row, int col, int arr[row][col], int arrInverse[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      arrInverse[i][j] = arr[i][j];
    }
  }
  for (int j = 0; j < col / 2; j++) {
    for (int i = 0; i < row; i++) {
      int tempVal = arrInverse[i][j];
      arrInverse[i][j] = arrInverse[i][col - j - 1];
      arrInverse[i][col - j - 1] = tempVal;
    }
  }
  return;
}
