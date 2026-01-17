// Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros). [Without using Arrays]

// Input Format

// A single integer N
// Constraints

// 0 ≤ N ≤ 1023
// Output Format

// A single integer number representing the binary equivalent of N, with a message, "Binary equivalent of [N]: [binaryForm]"
// Sample Input 0

// 16
// Sample Output 0

// Binary equivalent of 16: 10000
// Sample Input 1

// 19
// Sample Output 1

// Binary equivalent of 19: 10011

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int temp = N;
    long long binary = 0;
    int place = 1;
    if (N == 0) {
        printf("Binary equivalent of 0: 0");
        return 0;
    }

    while (N > 0) {
        int rem = N % 2;
        binary = binary + rem * place;
        place = place * 10;
        N = N / 2;
    }

    printf("Binary equivalent of %d: %lld", temp, binary);
    return 0;
}
 