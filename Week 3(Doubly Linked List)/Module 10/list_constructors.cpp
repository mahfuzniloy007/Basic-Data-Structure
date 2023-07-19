#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> MyList(10);
    
    // list<int> list2 = {10, 20, 30, 40, 50};
    // list<int> MyList(list2);

    // int a[5]={1,2,3,4,5};
    // list<int> MyList(a,a+5);

    list<int> MyList(10,69);

    for (int val : MyList) // Shortcut
    {
        cout << val << endl;
    }

    // for (auto it = MyList.begin(); it !=MyList.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    return 0;
}