#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( (int)a - (int)b );
}

void find_maximum_triangle_perimeter(int sides[], int size, int result[]) {
    qsort(sides, size, sizeof(int), cmpfunc);
    int i;
    for (i = size - 1; i > 1; i--) {
        if (sides[i] < sides[i-1] + sides[i-2]) {
            result[0] = sides[i-2];
            result[1] = sides[i-1];
            result[2] = sides[i];
            return;
        }
    }
    result[0] = result[1] = result[2] = 0;
}

int main() {
    int sides[] = {1, 2, 3, 4, 5, 10};
    int size = sizeof(sides) / sizeof(sides[0]);
    int result[3];
    find_maximum_triangle_perimeter(sides, size, result);
    printf("%d %d %d\n", result[0], result[1], result[2]);
    return 0;
}
