#include "../headers/tridimensional-matrix.h"
#include "../headers/console.h"
#include <stdio.h>
#include <stdlib.h>

void fill_tridimentional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]) {
  for (int s = 0; s < slices; s += 1) {
    for (int r = 0; r < rows; r += 1) {
      for (int c = 0; c< columns; c += 1) {
        write_console("Digite um número inteiro: ");
        scanf("%d", &matrix[s][r][c]);
      }
    }
  }
}

void print_tridimensional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]) {
  for (int s = 0; s < slices; s += 1) {
    write_console("[");
    for (int r = 0; r < rows; r += 1) {
      write_console("[");
      for (int c = 0; c < columns; c += 1) {
        if (c == columns - 1) {
          write_console("%d", matrix[s][r][c]);
        } else {
          write_console("%d, ", matrix[s][r][c]);
        }
      }
      if (r == rows - 1) {
        write_console("]");
      } else {
        write_console("], ");
      }
    }
    if (s == slices - 1) {
      write_console("]\n");
    } else {
      write_console("],\n");
    }
  }
}