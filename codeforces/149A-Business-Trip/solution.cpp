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
    int k; cin >> k;

    if (k == 0) {cout << "0\n"; return 0;}
    int i =0;
    int soma = 0;
    vector<int> v(12);

    for (i = 0; i < 12; i++) cin >> v[i];

    sort(v.begin(), v.end());

    i = 11;
    while (soma < k){
        soma+=v[i];
        i--;
        if (i < -1) {cout << -1 << endl; return 0;}
    }

    cout << 11 - i << endl;

    return 0;
}
