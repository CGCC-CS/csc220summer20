#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(int argc, char * argv[]) {
    matrix_t *D, *A, *B, *C;
  
    /* Read 2 matrices from files */
    printf("Read A from file %s:\n", argv[1]);
    A = read_matrix_from_file(argv[1]);
    print_matrix(A);
    printf("Read B from file %s:\n", argv[2]);
    B = read_matrix_from_file(argv[2]);
    print_matrix(B);

    /* Add the 2 matrices */
    printf("C = A + B:\n");
    C = add(A, B);
    print_matrix(C);
  
    /* Transpose matrix A */
    printf("\nD = Transpose A:\n");
    D = transpose(A);
    print_matrix(D);

    /* Free memory */
    del_matrix(&A);
    del_matrix(&B);
    del_matrix(&C);
    del_matrix(&D);

    return 0;
}
