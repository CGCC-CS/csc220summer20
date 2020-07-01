#include<stdio.h>
#include<stdlib.h>

#define ROWS 3
#define COLS 4

int main(void) {
    int * ptr1d;    /* pointer to 1-dimensional array */
    int ** ptr2d;   /* pointer to 2-dimensional array */

     
    /*     R     O       W     S
       [--COLS--|--COLS--|--COLS--] */
    ptr1d = malloc(ROWS * COLS * sizeof(int));

    /* [ ]->
       [ ]->
       [ ]->
    */
    ptr2d = malloc(ROWS * sizeof(int*));

    for (int rr=0;rr<ROWS;rr++) {
        /* [--COLS--] */
        *(ptr2d+rr) = malloc(COLS * sizeof(int*));
    }
    /* [ ]-> [--COLS--]
       [ ]-> [--COLS--]
       [ ]-> [--COLS--]
     */

    for (int rr=0;rr<ROWS;rr++) {
        for (int cc=0;cc<COLS;cc++) {
            printf("Assign row=%d col%d\n", rr, cc);
            /* [rr][cc] : (rr * COLS) + cc */
            *((ptr1d+(COLS*rr))+cc) = (rr * COLS) + cc;
            *(*(ptr2d+rr)+cc) = (rr * COLS) + cc;
        }
    }

    printf("ptr1d:\n");
    for (int rr=0;rr<ROWS;rr++) {
        for (int cc=0;cc<COLS;cc++) {
            printf(" %3d", *((ptr1d+(COLS*rr))+cc));
        }
        printf("\n");
    }

    printf("\nptr2d:\n");
    for (int rr=0;rr<ROWS;rr++) {
        for (int cc=0;cc<COLS;cc++) {
            printf(" %3d", *(*(ptr2d+rr)+cc));
        }
        printf("\n");
    }
    printf("ptr1d:\n");
    for (int rr=0;rr<ROWS;rr++) {
        for (int cc=0;cc<COLS;cc++) {
            printf(" %3d", ptr1d[(COLS*rr)+cc]);
        }
        printf("\n");
    }

    printf("\nptr2d:\n");
    for (int rr=0;rr<ROWS;rr++) {
        for (int cc=0;cc<COLS;cc++) {
            printf(" %3d", ptr2d[rr][cc]);
        }
        printf("\n");
    }



    /* free memory) */
    for (int rr=0;rr<ROWS;rr++) {
        free(*(ptr2d+rr));
    }
    free(ptr1d);
    free(ptr2d);


    return 0;
}
