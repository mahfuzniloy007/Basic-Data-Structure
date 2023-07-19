#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList={10,20,30};
    // cout<<MyList.size()<<endl;
    // MyList.clear();
    MyList.resize(2);
    MyList.resize(5,100);
    for(int val: MyList)
    {
        cout<<val<<endl;
    }
    return 0;
}