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
int nPr(int N, int r)
{
    int res = 0;
    if (r == 0) {
        return 1;
    }
    else {
        res = nPr(N, r - 1)
              * (N - r + 1) ;
    }
    return res;
}
int main(){
    cout<<"PRACTICAL 11"<<endl;
    cout<<endl;
int n,r;
cout<<"Enter the value of n = ";
cin>>n;
cout<<"Enter the value of r = ";
cin>>r;
cout<<endl;
cout<<"PERMUTATIONS :";
cout<<nCr(n,r)<<endl;
cout<<"COMBINATIONS :";
cout<<nPr(n,r)<<endl;
return 0;
}
