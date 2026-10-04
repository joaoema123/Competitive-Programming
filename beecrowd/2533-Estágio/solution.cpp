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
    int m;
    while (cin >> m)
    {
        ll soma1, soma2;
        soma1 = soma2 = 0;
        for(int i=0; i<m; i++)
        {
            int ni, ci;
            cin >> ni >> ci;
            soma1 += ni*ci;
            soma2 += ci;
        }
        cout << fixed << setprecision(4) << (double)soma1/((double)soma2*100) << endl;
    }
    return 0;
}
