#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    vector<int> c;
    c=b;
    c.insert(c.end(),a.begin(),a.end());
    for(int val:c)
    {
        cout<<val<<" ";
    }
    return 0;
}