#include "part_of_the_matrix.h"

void mx_printint(int n) {
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    else if (n >= 10) {
        mx_printint(n / 10);
    }

    mx_printchar(n % 10 + 48);
}

