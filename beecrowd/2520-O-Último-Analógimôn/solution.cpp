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
        int cidade[n][m];
        int pos1x, pos1y, pos2x, pos2y;
        for(int i=0; i<n; i++)
            for (int j=0; j<m; j++) 
            {
                cin >> cidade[i][j];
                if (cidade[i][j] == 1)
                {
                    pos1x=i;
                    pos1y=j;
                }
                else if (cidade[i][j] == 2)
                {
                    pos2x=i;
                    pos2y=j;
                }
            }
        cout << abs(pos1x-pos2x)+abs(pos1y-pos2y) << endl;
    }
    return 0;
}
