/*
Objective
This challenge will let you learn about bitwise operators in C.

Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used which are explained below.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .

For example, for integers 3 and 5,

3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
Task
Given set , find:

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

Input Format

The only line contains  space-separated integers,  and , respectively.

Constraints

Output Format

The first line of output contains the maximum possible value of .

The second line of output contains the maximum possible value of .

The second line of output contains the maximum possible value of .

Sample Input 0

5 4
Sample Output 0

2
3
3
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  printf("%d\n",((k-1)|k)<=n? (k-1):(k-2));
    printf("%d\n",((k-1)&(k-2))==0? (k==3?0:(k-2)) : (k-1) );
    printf("%d\n", k-1);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


