#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    cout<<"PRACTICAL 13 "<<endl;
    cout<<endl;
    cout<<"Enter Truth value pairs"<<endl;
int a[8][2];
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin>>a[i][j];
    }
}
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout<<a[i][j]<< " ";
    }
    cout<<endl;
}
//conjunction
cout<<"Conjunction"<<endl;
for (int i = 0; i < 4; i++)
{
    int res=0;
    for (int j = 0; j < 2; j++)
    {
        res|=a[i][j];
    }
    cout<<res<<" ";
    cout<<endl;
}
//disjunction
cout<<"Disjunction"<<endl;
for (int i = 0; i < 4; i++)
{
    int res=1;
    for (int j = 0; j < 2; j++)
    {
        res&=a[i][j];
    }
    cout<<res<<" ";
    cout<<endl;
}
//exclusive or
cout<<"Exclusive or"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j+=2)
    {
        res=a[i][j]^a[i][j+1];
    }
    cout<<res<<" ";
    cout<<endl;
}
//exclusive or
cout<<"Exclusive or"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j+=2)
    {
        res=a[i][j]^a[i][j+1];
    }
    cout<<res<<" ";
    cout<<endl;
}
//Conditional
cout<<"Conditional"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j+=2)
    {
        res=!(a[i][j])|(a[i][j+1]);
    }
    cout<<res<<" ";
    cout<<endl;
}
//Bi-Conditional
cout<<"Bi-Conditional"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j+=2)
    {
        res=((!(a[i][j])|(a[i][j+1]))&(!(a[i][j+1])|(a[i][j])));
    }
    cout<<res<<" ";
    cout<<endl;
}
//exclusive Nor
cout<<"Exclusive Nor"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j+=2)
    {
        res=!(a[i][j]^a[i][j+1]);
    }
    cout<<res<<" ";
    cout<<endl;
}
// Negation
cout<<"Negation"<<endl;
for (int i = 0; i < 4; i++)
{
    int res;
    for (int j = 0; j < 2; j++)
    {
        res=!(a[i][j]);
        cout<<res<<" ";
    }

    cout<<endl;
}
// Nand
cout<<"Nand"<<endl;
for (int i = 0; i < 4; i++)
{
    int res=1;
    for (int j = 0; j < 2; j++)
    {
        res&=a[i][j];
    }
    res=!res;
    cout<<res<<" ";
    cout<<endl;
}
// Nor
cout<<"Nor"<<endl;
for (int i = 0; i < 4; i++)
{
    int res=0;
    for (int j = 0; j < 2; j++)
    {
        res|=a[i][j];
    }
    res=!res;
    cout<<res<<" ";
    cout<<endl;
}
return 0;
}
