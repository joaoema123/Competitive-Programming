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
    double fracao = 0;
    int n;

    cin >> n;
    for (int i=0; i<n; i++)
        fracao = 1/(6+fracao);
    
    printf("%.10f\n", (double)3+fracao);
}

