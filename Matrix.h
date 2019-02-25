/**
 * Generate the multiplication table
 */
void multiplicationTable(int *arr, sizeRow, sizeCol) {
  for (int i = 0; i < sizeRow; i++) {
    for (int j = 0; j < sizeCol; j++) {
      if (i == 0 || j == 0) {
        arr[i][j] = i + j;
      }
      else {
        arr[i][j] = i * j;
      }
    }
  }
  
  return;
}

/**
 * Reverse the matrix column-wise
 */
void reverseColumn(int 
