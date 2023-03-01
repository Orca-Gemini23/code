//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        long long int fibo[n + 2];
        
        fibo[0] = 0;
        fibo[1] = 1;
        int i; 
        for(i = 2; i <= n; i++){
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        return 1000000007 % fibo[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends