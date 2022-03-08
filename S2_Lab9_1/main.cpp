#include <iostream>
#include <string>

using namespace std;
int N = 5;

bool kereses(int tomb[100][100], int x, int y)
{
    if(tomb[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
};


int main()
{
    int tomb[100][100];
    string aux;

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cout << "van ut " << i << " es " << j << " kozott? ";
            cin >> aux;
            if(aux == "igen")
            {
                tomb[i][j] = 1;
            }
            else if(aux == "nem")
            {
                tomb[i][j] = 0;
            }
        }
    }
    int x, y;
    cout << "Add meg a ket csomopontot ";
    cin >> x >> y;
    bool kerdes = kereses(tomb , x ,y);
    if(kerdes == true){
        cout << "van ut";
    } else {
      cout << "nincs ut";
    }
    return 0;
}

