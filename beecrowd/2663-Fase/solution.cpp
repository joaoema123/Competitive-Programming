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
    short n; cin >> n;
    short k; cin >> k;
    short classificados = k;
    vector<short> pont(n);

    for (int i=0; i<n; i++) cin >> pont[i];
    sort(pont.begin(), pont.end(), greater<>());

    short i = k-1;
    while ((i < n) && (pont[i]==pont[i+1])) 
    {
        classificados++;
        i++;
    }

    cout << classificados << endl;

    return 0;
}
