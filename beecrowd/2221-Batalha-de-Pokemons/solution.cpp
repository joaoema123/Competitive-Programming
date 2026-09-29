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
    
    int t; cin >> t;
    while (t--)
    {
        int b; cin >> b;
        int da, dd, dl; 
        int ga, gd, gl;

        cin >> da >> dd >> dl;
        cin >> ga >> gd >> gl;

        int atq1 = (double)(da+dd)/2;
        if (dl % 2 == 0)
            atq1 += b;

        int atq2 = (double)(ga+gd)/2;
        if (gl % 2 == 0)
            atq2 += b;

        if (atq1 > atq2) cout << "Dabriel\n";
        else if (atq1 < atq2) cout << "Guarte\n";
        else cout << "Empate\n";
    }
    return 0;
}
