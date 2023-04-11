#include "main.h"

int _sqrt_recursion_helper(int n, int start, int end) {
    if (start <= end) {
        int mid = start + (end - start) / 2;
        int mid_squared = mid * mid;
        if (mid_squared == n) {
            return mid;
        } else if (mid_squared < n) {
            return _sqrt_recursion_helper(n, mid + 1, end);
        } else {
            return _sqrt_recursion_helper(n, start, mid - 1);
        }
    } else {
        return -1; // if n does not have a natural square root, return -1
    }
}

int _sqrt_recursion(int n) {
    if (n < 0) { // if n is negative, return -1 to indicate an error
        return -1;
    } else if (n == 0 || n == 1) { // if n is 0 or 1, return n
        return n;
    } else {
        return _sqrt_recursion_helper(n, 1, n / 2); // start binary search in the range of [1, n/2]
    }
}

int main() {
    int n = 16;
    printf("sqrt(%d) = %d\n", n, _sqrt_recursion(n)); // prints "sqrt(16) = 4"
    return 0;
}

