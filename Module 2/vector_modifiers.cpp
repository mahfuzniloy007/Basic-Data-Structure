#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x={10,20,30,40};
    // vector<int> v={1,2,3};
    // v=x;
    // cout<<v.size()<<endl;

    // vector<int> v={10,20,30,40};
    // v.push_back(50);

    vector<int> v = {10, 20, 30, 40};
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

// v= or v.assign() -> Assign another vector.
// v.push_back() -> Add an element to the end.
// v.pop_back() -> Remove the last element.
// v.insert() -> Insert elements at a specific position.
// v.erase() -> Delete elements from a specific position.
// replace(v.begin(),v.end(),value,replace_value) -> Replace all the value with replace_value. Not under a vector.
// find(v.begin(),v.end(),V) -> Find the value V. Not under a vector.
