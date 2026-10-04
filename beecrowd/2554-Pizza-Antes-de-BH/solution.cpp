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
    int n, d;
    while (cin >> n >> d)
    {
        int i;
        bool status = true;
        for(i=0; i < d; i++)
        {
            string data; cin >> data;
            int sim = 0;
            for (int j=0; j<n; j++)
            {
                int p; cin >> p;
                if (p == 1) sim++;
            }
            if (sim == n && status)
            {
                cout << data;
                status = false;
            }
        }
        if (status) cout << "Pizza antes de FdI";
        cout << endl;
    }
    return 0;
}
