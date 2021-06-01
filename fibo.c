#include "module.h"

int fibo(int n) {
    int a, b, c;
    a = 1;
    b = 1;
    for (int i = 2; i < n; i++) {
        c = a;
        a = b + a;
        b = c;
    }
    return a;
}
