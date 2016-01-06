/*You are given an integer, N. Write a program to determine if N is an element of the Fibonacci Sequence.

The first few elements of fibonacci sequence are 0,1,1,2,3,5,8,13.... A fibonacci sequence is one where every element is a sum of the previous two elements in the sequence. The first two elements are 0 and 1.

Formally:

fib0 = 0
fib1 = 1
fibn = fibn-1 + fibn-2 ∀ n > 1

Input Format
The first line contains T, number of test cases.
T lines follows. Each line contains an integer N.

Output Format
Display IsFibo if N is a fibonacci number and IsNotFibo if it is not a fibonacci number. The output for each test case should be displayed on a new line.

Constraints
1 <= T <= 105
1 <= N <= 1010

Sample Input

3
5
7
8

Sample Output

IsFibo
IsNotFibo
IsFibo

Explanation
5 is a Fibonacci number given by fib5 = 3 + 2
7 is not a Fibonacci number
8 is a Fibonacci number given by fib6 = 5 + 3 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long long int t,i,c,n; 
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {   
        long long int a=0,b=1;
        scanf("%lld",&n);
        c=a+b;
        while(c<n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==n)
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
    }
    
    return 0;
}

