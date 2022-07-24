#include <iostream>
using namespace std;
int calculateLeafNodes(int m, int i)
{
 return i * (m - 1) + 1;
}
int main()
{
    cout<<"PRACTICAL 20 "<<endl;
    cout<<endl;
 int m, i;
 cout << "Enter the maximum number of children in the full m-ary tree: ";
 cin >> m;
 cout << "Enter the number of internal vertices: ";
 cin >> i;
 cout << "Number of Leaf Nodes in the full " << m << "-ary tree: "
 << calculateLeafNodes(m, i) << endl;
 return 0;
}
