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
   
    unsigned long long patinhos;

    while ((cin >> patinhos) && ((int)patinhos != -1))
    {
        if (patinhos == 0) cout << 0;
        else cout << patinhos-1;
        cout << endl;
    }
    return 0;
}
