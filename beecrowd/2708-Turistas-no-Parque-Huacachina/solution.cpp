#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    
    string s;
    int entrou = 0;
    int je = 0;
    int voltou = 0;
    int jv = 0;
    while (cin >> s && (s != "ABEND"))
    {
        int t; cin >> t;
        if (s == "SALIDA") 
        {
            entrou += t;
            je++;
        }
        else
        { 
            voltou += t;
            jv++;
        }
    }

    cout << entrou - voltou << endl << je - jv << endl;

    return 0;
}
