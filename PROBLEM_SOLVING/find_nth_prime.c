// Given an integer n, write a program to calculate the n-th prime number, starting from 1.

// Input Format

// A single integer 𝑛.
// Constraints

// 1 <= n <=104
// Output Format

// Print the n-th prime number.
// Sample Input 0

// 6
// Sample Output 0

// 13
// Explanation 0

// 13 is the 6th prime number.

// Sample Input 1

// 12
// Sample Output 1

// 37

#include <stdio.h>
#include<math.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int num = 2; ; num++) {
        int prime = 1;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            count++;
            if (count == n) {
                printf("%d", num);
                break;
            }
        }
    }

    return 0;
}