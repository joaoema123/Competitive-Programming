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
    
    vector<int> andares(3);
    for (int i=0; i<3; i++) cin >> andares[i];

    int menor = 2*andares[1] + 4*andares[2];
    if (menor > 2*andares[0] + 2*andares[2]) menor = 2*andares[0] + 2*andares[2];
    if (menor > 4*andares[0] + 2*andares[1]) menor = 4*andares[0] + 2*andares[1];

    cout << menor << endl;
}

