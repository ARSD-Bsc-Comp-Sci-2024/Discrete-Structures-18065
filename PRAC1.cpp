#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;

bool ismember(int a,int A[],int n){

if (*find(A,A+n,a)!=a)
{
    return false;
}
return true;
}

void powerset(int A[],int n){
    for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        for (int k = i; k <=j; k++)
        {
        cout<<A[k]<<" ";

        }
cout<<endl;

    }

}
}
int main(){
    cout<<"PRACTICAL 1"<<endl;

    cout<<"\nEnter size of set : ";
    int n;
    cin>>n;
    set<int> s;
    int a[n];
    int count=0;
    cout<<"Enter elements of set : ";
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
       if (s.find(a[i])==s.end())
       {
           s.insert(a[i]);
           count++;
       }
    }
    cout<<"Set Elements:{";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"}"<<endl;

    cout<<"\nCardinality = "<<count<<endl;
    cout<<"\nChecking Membership:";
    if (ismember(5,a,n))
    {
        cout<<"True"<<endl;
    }
    else
    cout<<"False"<<endl;
    cout<<endl;
    powerset(a,n);
return 0;
}
