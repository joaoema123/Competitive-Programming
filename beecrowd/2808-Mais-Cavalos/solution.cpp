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
    char c;
    int num;
    pair<int, int> pos_ini;
    pair<int, int> pos_dest;
    cin >> c >> num;

    pos_ini.f = c-96;
    pos_ini.s = num;

    cin >> c >> num;

    pos_dest.f = c-96;
    pos_dest.s = num;

    if ((abs(pos_ini.f - pos_dest.f) == 2) && (abs(pos_ini.s - pos_dest.s) == 1)) 
        cout << "VALIDO";
    else if ((abs(pos_ini.f - pos_dest.f) == 1) && (abs(pos_ini.s - pos_dest.s) == 2))
        cout << "VALIDO";
    else cout << "INVALIDO";
    cout << endl;

    return 0;
}
