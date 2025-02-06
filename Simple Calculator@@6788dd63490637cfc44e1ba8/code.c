#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    int result;
    int error = 0;

    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b == 0) {
            error = 1;
        } else {
            result = a / b;
        }
    } else {
        error = 1;
    }

    if (error) {
        printf("error\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}