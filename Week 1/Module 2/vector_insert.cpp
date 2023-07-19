#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v = {10, 20, 30, 40, 50};
    // v.insert(v.begin()+2,69); /*-> for single value insert*/
    v.insert(v.begin() + 2, v2.begin(), v2.end()); /*-> for another vector insert */
    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}