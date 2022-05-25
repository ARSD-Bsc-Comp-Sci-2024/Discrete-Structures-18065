//FIND AN ELEMENT IN ARRAY
#include <iostream>
#include <climits>
using namespace std;
int linearsearch(int arr[],int n, int key)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    cout<<"enter key";
    cin>>key;
    cout<<linearsearch(arr, n,key)<<endl;
    return 0;


}
