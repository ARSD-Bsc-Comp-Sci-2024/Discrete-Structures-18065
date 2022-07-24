#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int nCr(int N, int r)
{
    int res = 0;
    if (r == 0) {
        return 1;
    }
    else {
        res = nCr(N, r - 1)
              * (N - r + 1) / r;
    }
    return res;
}
// Driver Code
int main()
{
    cout<<"PRACTICAL 12"<<endl;
    cout<<endl;
   cout<<"Number of solutions of the equation x1 + x2 + x3 + …+ xn = C are : ";
    int n = 3 ;
    int k = 3 ;
    int ans = nCr(n + k - 1 , k);
    cout << ans <<endl;
    return 0 ;
}
