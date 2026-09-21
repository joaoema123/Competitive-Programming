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
    int t; cin >> t;
    for (int i=0; i<t; i++)
    {
        bool imprime = true;
        string a; string b; string c;
        cin >> a >> b >> c;

        for (int j=0; j<a.size(); j++)
        {
            // as letras são diferentes entre si
            if((a[j] != b[j]) && (b[j] != c[j]) && (a[j] != c[j]))
            {
                imprime = false;
                break;
            }
            // as letras da string a e b são iguais, mas a de c não. Como o swap
            // é obrigatório vai dar resposta "NO"
            else if ((a[j] == b[j]) && (a[j] != c[j]))
            {
                imprime = false;
                break;
            }
        }

        if (imprime) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
