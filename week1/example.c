#include<stdio.h>

void print_numbers(int x);

int main(void) {
    int num = 40;
    char ch = 'A';

    int numbers[] = {1, 2, 3, 4, 5};
    int multiples[10];

    char str[] = "A string!";


    for (int ii=0;ii<10;ii++) {
        multiples[ii] = ii * 10;
    }

    printf("%d %f %s\n", num, 3.14159, str);
    printf("%4d %10d %.2f\n", num, 324, 3.14159);
    printf("%d %x %c\n", ch, ch, ch);
    printf("%c %c %c\n", ch, ch+1, ch+10);
    printf("%d %o %x\n", num, num, num);
    print_numbers(20);

    return 0;
}

void print_numbers(int x) {
    for(int ii=1; ii<=x; ii++) {
        printf("%d ", ii);
    }
    printf("\n");
}
