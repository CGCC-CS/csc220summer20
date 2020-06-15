#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("This is a demonstration of using git.\n");

    for (int ii=0;ii<10;ii++) {
        printf("  %d ", ii);
    }
    printf("\n");

    printf("3 + 4 = %d\n", add(3,4));

    return 0;
}
