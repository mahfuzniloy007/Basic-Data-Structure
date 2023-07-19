#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // v.erase(v.begin()+3); /*-> for single erase*/
    v.erase(v.begin() + 1, v.end() - 1); /*-> for multiple erase*/
    // v.erase(v.begin()+1,v.begin()+4); /*-> for multiple erase*/ (another way)
    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}