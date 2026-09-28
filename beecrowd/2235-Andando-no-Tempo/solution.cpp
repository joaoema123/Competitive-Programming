#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    
    vector<int> v(3);
    for (int i = 0; i< 3; i++)
        cin >> v[i];

    for (int i=0; i<3; i++)
    {
        if (i == 0)
        {
            int val = v[0];
            if (val == v[1] || val == v[2] || val == v[1]+v[2])
            {
                cout << "S\n";
                return 0;
            }
        }
        else if (i == 1)
        {
            int val = v[1];
            if (val == v[0] || val == v[2] || val == v[0]+v[2])
            {    
                cout << "S\n";
                return 0;
            }
        }
        else
        {
            int val = v[2];
            if (val == v[1] || val == v[0] || val == v[1]+v[0])
            {
                cout << "S\n";
                return 0;
            }
        }
    }

    cout << "N\n";
    return 0;
}
