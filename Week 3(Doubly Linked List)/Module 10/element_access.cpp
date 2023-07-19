#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList = {50, 20, 30, 40, 50, 10, 20, 30, 40};
    // cout<<MyList.back();
    // cout<<MyList.front();
    cout << *next(MyList.begin(), 4);
    return 0;
}