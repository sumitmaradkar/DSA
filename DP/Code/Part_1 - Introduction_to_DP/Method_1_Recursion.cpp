// Topic : Introduction to DP
// Problem : Finding nth Fibonacci Number(were n is 0 indexed).

// Method 1 : Using Recursion (Top-Down Approach --> Recursive Cases to Base Cases)

// Time Complexity : O(2^n)
// Reason : As we are calling 2 recursive calls everytime for calculating the value of f(n)


// Auxilliary Space Complexity : O(n)
// Reason : Auxilliary space taken by recursion tree (i.e height of recursion tree)

// Non-Auxilliary Space Complexity : O(1)
// Reason : No use of any data structure (like array, vector, matrix, etc)

// Total Space Complexity : O(n)
// Reason : Sum of Auxilliary Space Complexity O(n) and Non-Auxilliary Space Complexity O(1) (i.e O(n) = O(n)+O(1))

#include<bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n <= 1) return n;
    return f(n-1)+f(n-2);
}

int main(){
    int n = 5;
    cout<<"Fibonacci("<<n<<") : "<<f(n);
    return 0;
}