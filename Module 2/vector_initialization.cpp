#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; -> type 1
    // vector<int> v(5); -> type 2
    // vector<int> v(5,10); -> type 3
    // vector<int> v2(5,20); ->type 4
    // vector<int> v(v2); -> type 4
    // int a[6]={1,2,3,4,5,6}; -> type 5
    // vector<int> v(a,a+6); -> type 5
    vector<int> v = {1, 3, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();
    return 0;
}

// vector<type>v; -> Construct a vector with 0 elements.
// vector<type>v(N); -> Construct a vector with N elements and the value will be garbage.
// vector<type>v(N,V); -> Construct a vector with N elements and the value will be V.
// vector<type>v(v2); -> Construct a vector by copying another vector v2.
// vector<type>v(A,A+N); -> Construct a vector by copying all elements from an array A of size N.
