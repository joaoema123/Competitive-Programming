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

    int t;
    while (cin >> t)
    {
        // expressões
        vector<vector<int>> exp(t);
        // pessoas que não passaram
        vector<string> np;
        for (int i=0; i<t; i++)
        {
            int a, b, c;
            char lixo;
            cin >> a >> b >> lixo >> c;
            exp[i].push_back(a);
            exp[i].push_back(b);
            exp[i].push_back(c);
            
        }
        for (int i=0; i<t; i++)
        {
            int res;
            string nome; cin >> nome;
            int idx; cin >> idx;
            char op; cin >> op;
            switch(op)
            {
                case '+':
                    res = exp[idx-1][0]+exp[idx-1][1];
                    break;
                case '-':
                    res = exp[idx-1][0]-exp[idx-1][1];
                    break;
                case '*':
                    res = exp[idx-1][0]*exp[idx-1][1];
                    break;
                case 'I':
                    if (exp[idx-1][0]+exp[idx-1][1] == exp[idx-1][2]
                        || exp[idx-1][0]-exp[idx-1][1] == exp[idx-1][2]
                        || exp[idx-1][0]*exp[idx-1][1] == exp[idx-1][2])
                        np.push_back(nome);
                    res = exp[idx-1][2];
                    break;
            }
            if (res != exp[idx-1][2]) np.push_back(nome);
        }

        if ((int)np.size() == t) cout << "None Shall Pass!";
        else if ((int)np.size() == 0) cout << "You Shall All Pass!";
        else
        {
            int i;
            sort(np.begin(), np.end());
            for(i=0; i<(int)np.size()-1; i++)
                cout << np[i] << ' ';
            cout << np[i];
        }
        cout << endl;
    }
    return 0;
}
