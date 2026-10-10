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
    int n; cin >> n;
    int numeros[n];
    numeros[0] = 1;
    numeros[1] = 1;

    for (int i=2; i<n; i++)
        numeros[i] = numeros[i-1] + numeros[i-2];
    
    for (int i=n-1; i>=0; i--)
    {
        cout << numeros[i];
        if (i != 0) cout << ' ';
    }
    cout << endl;
    return 0;
}
