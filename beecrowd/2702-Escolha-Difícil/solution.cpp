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
    
    int ca, ba, pa, cr, br, pr;
    int soma = 0;

    cin >> ca >> ba >> pa >> cr >> br >> pr;

    if (ca < cr) soma += cr-ca;
    if (ba < br) soma += br-ba;
    if (pa < pr) soma += pr-pa;

    cout << soma << endl;

    return 0;
}
