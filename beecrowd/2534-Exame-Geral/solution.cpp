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
   
    int n, q;
    while (cin >> n >> q)
    {
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end(), greater<>());
        for(int i=0; i<q; i++)
        {
            int idx; cin >> idx;
            cout << v[idx-1] << endl;
        }
    }
    return 0;
}
