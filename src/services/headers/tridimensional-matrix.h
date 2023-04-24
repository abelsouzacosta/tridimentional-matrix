#ifndef MATRIX_3D
#define MATRIX_3D
#define SLICES 2
#define ROWS 2
#define COLUMNS 2

void fill_tridimentional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]);

void print_tridimensional_matrix(int slices, int rows, int columns, int (*matrix)[rows][columns]);


#endif