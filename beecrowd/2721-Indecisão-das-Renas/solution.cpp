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
    string nomes[9] = {
        "Dasher", "Dancer", "Prancer",
        "Vixen", "Comet", "Cupid",
        "Donner", "Blitzen", "Rudolph"
    };

    int t;
    int soma = 0;
    for (int i=0; i <9; i++)
    {
        cin >> t;
        soma += t;
    }

    int resto = soma % 9;
    cout << (resto == 0 ? nomes[8] : nomes[resto-1]);
    cout << endl;
    return 0;
}
