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

void print_tridimensional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]) {
  for (int s = 0; s < slices; s += 1) {
    printf("[");
    for (int r = 0; r < rows; r += 1) {
      printf("[");
      for (int c = 0; c < columns; c += 1) {
        if (c == columns - 1) {
          printf("%d", matrix[s][r][c]);
        } else {
          printf("%d, ", matrix[s][r][c]);
        }
      }
      if (r == rows - 1) {
        printf("]");
      } else {
        printf("], ");
      }
    }
    if (s == slices - 1) {
      printf("]\n");
    } else {
      printf("],\n");
    }
  }
}

int main() {
  int matrix[2][2][2];
  int rows, columns;

  fill_tridimentional_matrix(2, 2, 2, matrix);

  print_tridimensional_matrix(2, 2, 2, matrix);

  return 0;
}