#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a; cin >> a;
        int b; cin >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }

        if (a > b)
            cout << b*(a/b + 1)-a;
        else
            cout << b-a;
        cout << endl;
    }
}
