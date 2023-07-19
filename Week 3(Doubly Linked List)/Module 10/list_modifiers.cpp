#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>MyList={10,20,30,40,250};
    // list<int>newList;
    // newList=MyList;
    // newList.assign(MyList.begin(),MyList.end());

    list<int> MyList = {10, 20, 30, 40, 50, 60, 70, 80};
    // MyList.push_back(200);
    // MyList.push_front(100);
    // MyList.pop_back();
    // MyList.pop_front();
    // MyList.insert(next(MyList.begin(),5),100);
    // MyList.erase(next(MyList.begin(),2));
    // MyList.insert(next(MyList.begin(),2),{100,200,300}); //For inserting multiple value
    // MyList.erase(next(MyList.begin(), 2), next(MyList.begin(), 5)); ////For deleting multiple value
    replace(MyList.begin(),MyList.end(),20,100);
    for (int val : MyList)
    {
        cout << val << endl;
    }
    return 0;
}