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
    short n;
    while (cin >> n)
    {
        double max = 0;
        for(int i=0; i<n; i++)
        {
            short t, d;
            cin >> t >> d;
            if ((double)d/t > max)
            {
                cout << i+1 << endl;
                max = (double)d/t;
            }
        }
    }
    return 0;
}
