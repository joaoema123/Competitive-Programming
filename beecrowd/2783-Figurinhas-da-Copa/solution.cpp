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
    int n, c, m;
    cin >> n >> c >> m;
    set<int> carimbadas;
    set<int> figurinhas;

    for (int i=0; i<c; i++)
    {
        int carimbada; cin >> carimbada;
        carimbadas.insert(carimbada);
    }

    for (int i=0; i<m; i++)
    {
        int figurinha; cin >> figurinha;
        if (figurinhas.find(figurinha) == figurinhas.end())
            figurinhas.insert(figurinha);
    }

    int total = 0;
    for (int figurinha : figurinhas)
    {
        if (carimbadas.find(figurinha) != carimbadas.end())
            total++;
    }

    cout << c - total << endl;
    return 0;
}
