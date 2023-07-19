#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    stack<int>st;
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}