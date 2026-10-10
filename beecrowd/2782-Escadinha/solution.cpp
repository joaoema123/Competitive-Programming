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
    int total = 1;
    vector<int> numeros(n);

    for (int i=0; i<n; i++) cin >> numeros[i];
    
    if (n == 1) cout << '1' << endl;
    else if (n == 2) cout << '2' << endl;
    else 
    {
        int dif = numeros[0] - numeros[1];
        for (int i=1; i < n-1; i++)
        {
            if (numeros[i]-numeros[i+1] != dif)
            {
                dif = numeros[i]-numeros[i+1];
                total++;
            }
        }
        cout << total << endl;
    }
    return 0;
}
