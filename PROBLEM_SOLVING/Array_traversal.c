// Given an array of integers, calculate the average value of all elements in the array and count how many elements are strictly greater than the average.

// The average is defined as: (sum of all elements) / N
// Comparison must be strictly greater (>), not greater than or equal to
// Input Format

// First line: Integer N
// Second line: N space-separated integers
// Constraints

// 1 ≤ N ≤ 10⁵
// −10⁹ ≤ A[i] ≤ 10⁹
// Output Format

// Print a single integer — the count of elements strictly greater than the average.
// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 2
// Sample Input 1

// 4
// 10 10 10 10
// Sample Output 1

// 0
// Sample Input 2

// 1
// 5
// Sample Output 2

// 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int size;
    scanf("%d",&size);
    long long sum=0;
    int counter=0;
    int arr[size];
    for(int i=0;i<=size-1;++i){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    double avg = (double)sum / size;

    if(size==0){
        printf("0");
    }
    
    for(int i=0;i<=size-1;++i){
        if(arr[i]>avg){
            ++counter;
        }
    }
    printf("%d",counter);
    return 0;
}
