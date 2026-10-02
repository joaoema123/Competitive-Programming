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
    cin >> n >> m;
    int mat[n][m];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> mat[i][j];

    for (int i=1; i<n-1; i++)
        for (int j=1; j<m-1; j++)
        {
            if (mat[i][j] == 42)
            {
                int total = 0;
                if(mat[i-1][j-1] == 7) total++;
                if(mat[i-1][j] == 7) total++;
                if(mat[i-1][j+1] == 7) total++;
                if(mat[i][j-1] == 7) total++;
                if(mat[i][j+1] == 7) total++;
                if(mat[i+1][j-1] == 7) total++;
                if(mat[i+1][j] == 7) total++;
                if(mat[i+1][j+1] == 7) total++;
                if (total == 8)
                {
                    cout << i+1 << ' ' << j+1 << endl;
                    return 0;
                }
            }
        }
    cout << "0 0" << endl;
    return 0;
}
