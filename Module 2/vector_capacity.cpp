#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;

    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;

    // v.clear();

    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(10, 69);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// v.size() -> Returns the size of the vector.
// v.max_size() -> Returns the maximum size that the vector can hold.
// v.capacity() -> Returns the current available capacity of the vector.
// v.clear() -> Clears the vector elements. Do not delete the memory, only clear the value.
// v.empty() -> Return true/false if the vector is empty or not.
// v.resize() -> Change the size of the vector.
