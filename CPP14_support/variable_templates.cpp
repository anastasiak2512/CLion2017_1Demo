#include <stdio.h>

template<typename T>
constexpr T PI = T(3.1415926535897932385);

template<typename T>
T area (T r) {
    return PI<T> * r * r;
}

void print_area() {
    printf("PI: %d, area: %d\n", PI<int>, area(2));
    printf("PI: %lf, area: %lf\n", PI<double>, area(2.0));
}