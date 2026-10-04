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
    int t;
    map<string, int> comidas = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };

    while ((cin >> t) && (t != 0))
    {
        int consumo = 0;
        for(int i =0; i<t; i++)
        {
            int qtd; cin >> qtd;
            string comida;
            cin.ignore();
            getline(cin, comida);
            consumo += qtd*comidas[comida];
        }
        if (consumo < 110) cout << "Mais " << 110 - consumo;
        else if (consumo > 130) cout << "Menos " << consumo - 130;
        else cout << consumo;
        cout << " mg" << endl;
    }
}
