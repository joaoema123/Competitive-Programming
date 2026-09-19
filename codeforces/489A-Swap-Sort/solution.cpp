#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<int> ind(2*n);

    int swaps = 0;

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    for (int i = 0; i < n-1; i++)
    {
        int menor = i;
        int temp;
        for (int j = i+1; j < n; j++)
        {
            if (v[j] < v[menor])
                menor = j;
        }

        ind[2*i] = i;
        ind[2*i+1] = menor;
        swaps++;
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }

    cout << swaps << endl;
    if (swaps == 0)
        return 0;
    for (int i = 0; i < swaps; i++)
    {
        cout << ind[2*i] << ' ' << ind[2*i+1] << endl;
    }

    
}
