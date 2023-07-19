#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Replace
    //  vector<int> v={1,2,3,4,5,2,3,4,2,4,4,6,4};
    //  replace(v.begin(),v.end(),4,100);
    //  for(int a:v)
    //  {
    //      cout<<a<<" ";
    //  }

    // Find
    vector<int> v = {1, 2, 3, 4, 5, 2, 3, 4, 2, 4, 4, 6, 4};
    auto it = find(v.begin(), v.end(), 100);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}