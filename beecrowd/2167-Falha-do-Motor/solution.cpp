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
    
    int n; cin >> n;
    vector<int> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        if (i > 0)
        {
            if(v[i-1] > v[i])
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}
