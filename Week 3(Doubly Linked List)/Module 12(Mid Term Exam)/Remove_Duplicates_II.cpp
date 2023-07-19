#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        MyList.push_back(val);
    }
    MyList.sort();
    MyList.unique();
    for(int ans:MyList)
    {
        cout<<ans<<" ";
    }
    return 0;
}