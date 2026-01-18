// You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.

// Use 0-based indexing
// Difference = (sum of even-index elements) − (sum of odd-index elements)
// Input Format

// First line: Integer N
// Second line: N space-separated integers
// Constraints

// 1 ≤ N ≤ 10⁵
// −10⁹ ≤ A[i] ≤ 10⁹
// Output Format

// Print a single integer representing the required difference.
// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 3
// Sample Input 1

// 4
// 10 10 10 10
// Sample Output 1

// 0
// Sample Input 2

// 1
// 0
// Sample Output 2

// 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int size;
    long long even_sum=0;
    long long odd_sum=0;
    scanf("%d/n",&size);
    int a[size];
    for(int i=0; i<=size-1;++i){
        scanf("%d",&a[i]);
        if(i%2==0){
            even_sum+=a[i];
        }
        else{
            odd_sum+=a[i];
        }
    }
    long long res= (even_sum - odd_sum);
    printf("%lld",res);
    
    return 0;
}