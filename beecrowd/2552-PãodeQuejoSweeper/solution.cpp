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
   
    int n, m;
    while (cin >> n >> m)
    {
        int mat[n][m];
        for(int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cin >> mat[i][j];
        for(int i=0; i<n; i++)
        {
            int j;
            for(j=0; j<m; j++)
            {
                if (mat[i][j] == 1) cout << 9;
                else 
                {
                    int total = 0;
                    if (i-1 >= 0 && mat[i-1][j] == 1) total++;
                    if (j+1 < m && mat[i][j+1] == 1) total++;
                    if (i+1 < n && mat[i+1][j] == 1) total++;
                    if (j-1 >= 0 && mat[i][j-1] == 1) total++;
                    cout << total;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
