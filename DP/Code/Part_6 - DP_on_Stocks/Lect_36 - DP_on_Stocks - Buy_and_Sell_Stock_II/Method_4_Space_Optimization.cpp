// Topic : DP on Stocks
// Problem : Buy and Sell Stock II


// Method 4 : Using Space Optimization (Bottom-Up DP --> Base Cases to Recursive Cases)

// Time Complexity : O(n*2)
// Reason : As we are using two nested For Loops (n and 2 iterations)


// Auxilliary Space Complexity : O(1)
// Reason : Auxilliary space take be recursion tree (i.e height of recursion tree)

// Non-Auxilliary Space Complexity : O(2)
// Reason : Using vector data structure of 2 size

// Total Space Complexity : O(2)
// Reason : Sum of Auxilliary Space Complexity O(1) and Non-Auxilliary Space Complexity O(2) (i.e O(1) = O(1)+O(2))

// Answer :
// Maximum Profit : 7

#include <bits/stdc++.h>
using namespace std;

// IMPORTANT NOTE : To simplify Base Case we shifted dp index by 1(i.e n to n+1)

int main()
{
    vector<int> prices {7,1,5,3,6,4};
    int n = prices.size();
    vector<int> front(2, -1), current(2, -1);

    // Base Case
    front[0] = 0, front[1] = 0;

    // Recursive Case
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int buy = 0; buy < 2; buy++)
        {
            int pick = 0, notPick = 0;
            // Buy
            if(buy) {
                pick = - prices[ind] + front[0];
                notPick = 0 + front[1];
            }
            // Sell
            else {
                pick = prices[ind] + front[1];
                notPick = 0 + front[0];
            }
            current[buy] = max(pick, notPick);
        }
        front = current;
    }
    
    cout<<"Maximum Profit : "<<front[1]<<endl;
    return 0;
}