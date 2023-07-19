#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList = {10, 20, 30, 40, 50, 60, 70, 80};
    auto it = find(MyList.begin(), MyList.end(), 90);
    if (it == MyList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}