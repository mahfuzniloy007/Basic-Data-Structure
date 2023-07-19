#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList = {50, 20, 30, 40, 50, 10, 20, 30, 40};
    // MyList.remove(10);
    // MyList.sort();
    // MyList.sort(greater<int>());
    // MyList.unique();
    MyList.reverse();
    for (int val : MyList)
    {
        cout << val << endl;
    }
    return 0;
}