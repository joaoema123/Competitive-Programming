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
    for (int i=0; i<n; i++)
    {
        double notaf = 0;
        double dif;
        string nome;
        vector<double> notas(7);

        cin >> nome >> dif;
        for(int j=0; j<7; j++) cin >> notas[j];
        sort(notas.begin(), notas.end());
        for(int j=1; j<6; j++) notaf += notas[j];

        cout << nome << ' ' << fixed << setprecision(2) << notaf * dif << endl;
    }
    return 0;
}
