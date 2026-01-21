// You are given an integer N. Your task is to find the nearest prime number to N.

// If N itself is prime, return N.
// If there are two prime numbers at the same minimum distance from N, return the smaller one.
// Input Format

// A single integer N
// Constraints

// 1 ≤ N ≤ 10^6
// Output Format

// Print the nearest prime number to N.
// Sample Input 0

// 13
// Sample Output 0

// 13
// Sample Input 1

// 8
// Sample Output 1

// 7

#include <stdio.h>
#include<math.h>
int main() {
int n;
    scanf("%d",&n);
    int prime=1;
    if(n==1){
        printf("2");
        return 0;
    }
    else{
        for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    }
    if(prime){
        printf("%d",n);
        return 0;
    }
    int j;
    int k;
    for(j=n-1,k=n+1;j>0;--j,++k){
        int lim1= sqrt(j);
        int lim2= sqrt(k);
        int lowerprime=1;int upperprime=1;
        if(j<2){
            lowerprime=0;
        }
        else{
           for(int b=2;b<=lim1;++b){
        if(j%b==0){
            lowerprime=0;
            break;
        }
    } 
        }
        if(k<2){
           upperprime=0; 
        }
        else{
           for(int a=2;a<=lim2;++a){
        if(k%a==0){
            upperprime=0;
            break;
        }
    }  
        }
        
   if(lowerprime && upperprime){
        printf("%d",j);
        break;
    }
     if(lowerprime){
        printf("%d",j);
         break;
    }
     if(upperprime){
        printf("%d",k);
         break;
    }
    }
    
   return 0;
    
}