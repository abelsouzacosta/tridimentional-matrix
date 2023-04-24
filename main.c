#include "./services/headers/console.h"
#include "./services/headers/tridimensional-matrix.h"


int main() {
  int matrix[2][2][2];

  fill_tridimentional_matrix(2, 2, 2, matrix);

  print_tridimensional_matrix(2, 2, 2, matrix);

  return 0;
}