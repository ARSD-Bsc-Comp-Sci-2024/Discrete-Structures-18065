
//repeatedly swap 2 adjacent elements if they are in wrong order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int c=1;
    while (c<n)
    {
        for (int i=0;i<n-c;i++)
        {
            if (arr[i]<arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        c=c+1;
    }

    cout<<"\nnew array"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

