                                                                      A. Adding Digits
                                                                time limit per test2 seconds
                                                            memory limit per test256 megabytes
                                                                    inputstandard input
                                                                    outputstandard output
                                                                    
                                                                    
Vasya has got two number: a and b. However, Vasya finds number a too short. So he decided to repeat the operation of lengthening number a n times.

One operation of lengthening a number means adding exactly one digit to the number (in the decimal notation) to the right provided that the resulting number is divisible by Vasya's number b. If it is impossible to obtain the number which is divisible by b, then the lengthening operation cannot be performed.

Your task is to help Vasya and print the number he can get after applying the lengthening operation to number a n times.

Input
The first line contains three integers: a, b, n (1 ≤ a, b, n ≤ 105).

Output
In a single line print the integer without leading zeros, which Vasya can get when he applies the lengthening operations to number a n times. If no such number exists, then print number -1. If there are multiple possible answers, print any of them.

Examples


input
5 4 5

output
524848

input
12 11 1

output
121

input
260 150 10

output
-1
