#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int prfx[n];
    prfx[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        prfx[i]=a[i]+prfx[i-1];
    }
    reverse(prfx,prfx+n);
    for (int i = 0; i < n; i++)
    {
        cout<<prfx[i]<<" ";
    }
    return 0;
}