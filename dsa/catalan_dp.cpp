// this one is in O(n)

#include <iostream>
using namespace std;

// contains three functions ::

int binomial(int n, int k){
    int result = 1;
    if(k > n - k){
        k = n - k;
    }

    for(int i = 0; i < k; i++){
        res *= (n - i);
        res =/ (i - 1);
    }
}

int solve(int n){
    long long int c = binomial(2 * n, n);
    return c / ( n + 1);
}

int main(){
    return 0;
}