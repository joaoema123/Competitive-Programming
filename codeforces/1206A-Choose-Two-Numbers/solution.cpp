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
    set<int> A;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        A.insert(a[i]);
    }
    int m; cin >> m;
    set<int> B;
    vector<int> b(m);
    for (int i=0; i <m; i++)
    {
        cin >> b[i];
        B.insert(b[i]);
    }

    for (int i =0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            int soma = a[i] + b[j];
            if (A.find(soma) == A.end() && B.find(soma) == B.end())
            {
                cout << a[i] << ' ' << b[j] << endl;
                return 0;
            }
        }
    return 0;
}
