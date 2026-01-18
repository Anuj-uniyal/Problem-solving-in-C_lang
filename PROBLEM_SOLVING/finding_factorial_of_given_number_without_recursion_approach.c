// You have to take input n from the user and find the factorial of the given number n without using recursion.

// input: 5
// output: 120

// input:4
// output:24

// input:6
// output:720


#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int mul=1;
   if(n==0){
       printf("1");
   }
   else{
       for(int i=1;i<=n;++i){
       mul*=i;
   }
   printf("%d",mul);

   }
   
    return 0;
}