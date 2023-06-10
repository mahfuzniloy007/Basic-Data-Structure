#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
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
    while (q--)
    {
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum;
        if (l==0) sum=prfx[r];
        else sum=prfx[r]-prfx[l-1];
        cout<<sum<<endl;
    }
    return 0;
}