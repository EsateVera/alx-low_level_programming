#include <stdio.h>

int main() {
    long long int a = 1, b = 2, temp;
    long long int sum = 0;

    while (a <= 4000000) {
        if (a % 2 == 0) {
            sum += a;
        }

        temp = a + b;
        a = b;
        b = temp;
    }

    printf("The sum of even-valued Fibonacci terms not exceeding 4,000,000 is: %lld\n", sum);

    return 0;
}
