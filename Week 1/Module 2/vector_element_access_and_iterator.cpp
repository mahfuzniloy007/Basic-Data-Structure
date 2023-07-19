#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // cout<<v.back();
    // cout<<v.front();
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}

// v[i] -> Access the ith element.
// v.at(i) -> Access the ith element.
// v.back() -> Access the last element.
// v.front() -> Access the first element.
// v.begin() -> Pointer to the first element.
// v.end() -> Pointer to the last element.
