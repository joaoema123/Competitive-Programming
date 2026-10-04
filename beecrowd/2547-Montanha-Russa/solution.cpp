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
    short n, min, max;
    while (cin >> n >> min >> max)
    {
        short total = 0;
        for (int i=0; i<n; i++)
        {
            short alt; cin >> alt;
            if (alt >= min && alt <= max) total++;
        }
        cout << total << endl;
    }
    return 0;
}
