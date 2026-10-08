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
    
    short t; cin >> t;
    int i=1;
    while (t--)
    {
        string conversao;
        cin >> conversao;
        int r, g, b;
        cin >> r >> g >> b;

        int res;
        if (conversao == "eye") res = (int)(0.3*r + 0.59*g + 0.11*b);
        else if (conversao == "mean") res = (int)((r+g+b)/3);
        else if (conversao == "max") res = max({r, g, b});
        else res = min({r, g, b});
        
        cout << "Caso #" << i << ": " << res << endl;
        i++; 
    }
    return 0;
}
