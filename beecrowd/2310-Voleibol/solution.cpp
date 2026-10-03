#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    ll ts, tb, ta;
    ll tsc, tbc, tac;
    ts = tb = ta = 0;
    tsc = tbc = tac = 0;
    int n; cin >> n;

    for (int i=0; i<n; i++)
    {
        int s, b, a;
        string nome;

        cin >> nome;
        cin >> s >> b >> a;
        ts += s;
        tb += b;
        ta += a;
        cin >> s >> b >> a;
        tsc += s;
        tbc += b;
        tac += a;
    }

    double s = ((double)tsc / ts)*100;
    double b = ((double)tbc / tb)*100;
    double a = ((double)tac / ta)*100;

    cout << "Pontos de saque: " << fixed << setprecision(2) << s << " %." << endl;
    cout << "Pontos de bloqueio: " << fixed << setprecision(2) << b << " %." << endl;
    cout << "Pontos de ataque: " << fixed << setprecision(2) << a << " %." << endl;
    return 0;
}
