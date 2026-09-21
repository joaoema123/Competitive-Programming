#include <bits/stdc++.h>
using namespace std;

// Aqui  ́e definida a macro "_", que ser ́a colocado mais na frente no c ́odigo
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
    string joia;
    set<string> joias;

    while (cin >> joia) joias.insert(joia);

    cout << joias.size() << endl;

    return 0;
}
