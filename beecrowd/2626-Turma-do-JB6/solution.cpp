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
    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper)
    {
        if (dodo == "pedra")
        {
            if (leo == "pedra")
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Urano perdeu algo muito precioso...";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }
            else if (leo == "papel")
            {
                if (pepper == "pedra")
                    cout << "Iron Maiden's gonna get you, no matter how far!";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }
            else
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...";
            }
        }
        else if (dodo == "papel")
        {
            if (leo == "pedra")
            {
                if (pepper == "pedra")
                    cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }
            else if (leo == "papel")
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Urano perdeu algo muito precioso...";
            }
            else
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Iron Maiden's gonna get you, no matter how far!";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }       
        }
        else
        {
            if (leo == "pedra")
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Iron Maiden's gonna get you, no matter how far!";
            }
            else if (leo == "papel")
            {
                if (pepper == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else if (pepper == "papel")
                    cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }
            else
            {
                if (pepper == "pedra")
                    cout << "Urano perdeu algo muito precioso...";
                else if (pepper == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar...";
                else cout << "Putz vei, o Leo ta demorando muito pra jogar...";
            }    
        }
        cout << endl;
    }
    return 0;
}
