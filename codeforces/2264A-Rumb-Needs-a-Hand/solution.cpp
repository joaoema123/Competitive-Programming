#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    // O(t*n)
    for (int j = 0; j < t; j++)
    {
        int n; cin >> n;
        int i =0;
        int idxmaior = 0;
        int idxmenor = 0;
        vector<int> v(n);
        vector<int> copia(n);
        // O(n)
        for (i=0; i<n; i++)
        {
            cin >> v[i];
            if (v[i] > v[idxmaior]) idxmaior = i;
            // menor que não está na posição ordenada
            else if ((v[i] != i+1) && (v[i] < v[idxmenor])) idxmenor = i;
            if (v[idxmenor] == idxmenor + 1) idxmenor++;
        }       
        
        if (idxmenor == n) {cout << "YES\n"; continue;}
        // troca o maior com o menor
        copia = v;
        sort(copia.begin(), copia.end());
        int temp = v[idxmenor];
        v[idxmenor] = v[idxmaior];
        v[idxmaior] = temp;

        if (v == copia) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
// caso em que v[0] = 1 e v[1] = n, então inverte pulando de um em um
// 1 6 3 4 5 2

// caso em que parte do vetor está ordenada e a parte que não está ordenada está "ordenada" em ordem decrescente
// 6 2 3 4 5 1


