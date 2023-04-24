#include "./services/headers/console.h"
#include "./services/headers/tridimensional-matrix.h"


int main() {
  int matrix[SLICES][ROWS][COLUMNS];

  fill_tridimentional_matrix(SLICES, ROWS, COLUMNS, matrix);

  clear_screen();

  print_tridimensional_matrix(SLICES, ROWS, COLUMNS, matrix);

  return 0;
}