#include <stdio.h>
#include <stdlib.h>

void fill_tridimentional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]) {
  for (int s = 0; s < slices; s += 1) {
    for (int r = 0; r < rows; r += 1) {
      for (int c = 0; c< columns; c += 1) {
        printf("Digite um número: ");
        scanf("%d", &matrix[s][r][c]);
      }
    }
  }
}


int main() {
  int matrix[2][2][2];
  int rows, columns;

  fill_tridimentional_matrix(2, 2, 2, matrix);

  return 0;
}