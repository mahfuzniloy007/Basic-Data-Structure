#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else if (flag == 1)
    {
        cout << "YES";
    }
    return 0;
}