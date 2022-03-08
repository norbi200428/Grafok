#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tomb[100][100], n ;
    string aux;
    cout <<"add meg a csomopontok szamat : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
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

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << tomb[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

