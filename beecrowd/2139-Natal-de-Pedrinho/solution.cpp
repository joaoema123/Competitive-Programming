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

    int d, m;
    vector<int> meses = {
        31, 29, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31
        };
    
    while (cin >> m >> d)
    {
        int dia_natal = 366-6;
        int dia_ano = d;

        for (int i = 0; i<m-1; i++)
            dia_ano += meses[i];
            
        int dist = dia_natal - dia_ano;
        
        if (dist == 0) cout << "E natal!" << endl;
        else if (dist == 1) cout << "E vespera de natal!" << endl;
        else if (dist < 0) cout << "Ja passou!" << endl;
        else cout << "Faltam " << dist << " dias para o natal!" << endl;
    }
    return 0;
}