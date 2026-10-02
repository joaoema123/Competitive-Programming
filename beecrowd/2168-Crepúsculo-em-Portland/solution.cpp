#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    
    int n; cin >> n;
    int mat[n+1][n+1];

    for (int i=0; i<n+1; i++)
        for (int j=0; j<n+1; j++)
            cin >> mat[i][j];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            int cam = 0;
            if(mat[i][j] == 1) cam++;
            if(mat[i+1][j] == 1) cam++;
            if(mat[i][j+1] == 1) cam++;
            if(mat[i+1][j+1] == 1) cam++;

            cout << (cam >= 2 ? 'S' : 'U');
        }
        cout << endl;
    }
    return 0;
}
