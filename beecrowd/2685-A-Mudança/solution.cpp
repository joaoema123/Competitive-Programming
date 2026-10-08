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
    int valor;
    while (cin >> valor)
    {
        if ((0 <= valor && valor < 90) || valor == 360) cout << "Bom Dia!!";
        else if (valor < 180) cout << "Boa Tarde!!";
        else if (valor < 270) cout << "Boa Noite!!";
        else cout << "De Madrugada!!";
        cout << endl;
    }
    return 0;
}
