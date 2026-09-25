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
    
    int t; cin >> t;

    for (int i=0; i<t; i++)
    {
        int j, k;
        j = k = 0;
        int n; cin >> n;
        int m; cin >> m;

        // coloca tudo como B menos na última posição
        for (j=0; j<n; j++)
        {
            for  (k=0; k<m-1; k++)
                cout << 'B';
            if (k == m-1 && j == n-1)
                cout << "W\n";
            else cout << "B\n";
        }
    }
    return 0;
}
