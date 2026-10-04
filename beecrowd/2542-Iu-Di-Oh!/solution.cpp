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
    int n;
    while (cin >> n)
    {
        int m, l;
        cin >> m >> l;

        int mm[m][n];
        for(int i=0; i<m; i++)
            for (int j=0; j<n; j++)
                cin >> mm[i][j];
            
        int ml[l][n];
        for(int i=0; i<l; i++)
            for (int j=0; j<n; j++)
                cin >> ml[i][j];
        
        int cm, cl, a;
        cin >> cm >> cl >> a;
        if (mm[cm-1][a-1] > ml[cl-1][a-1]) cout << "Marcos";
        else if (mm[cm-1][a-1] < ml[cl-1][a-1]) cout << "Leonardo";
        else cout << "Empate";
        cout << endl;
    }
    return 0;
}
