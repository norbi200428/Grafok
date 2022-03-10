#include <iostream>
#include <fstream>

using namespace std;

int lehet(int graf[100][100] , int x , int N){
     int counter = 0;
     for(int i = 1 ; i <= N ; i ++){
        if(graf[x][i] == 1){
           counter ++;
        }
     }
     return counter;
}

int main()
{
    ifstream in("input.txt");
    int graf[100][100], N;
    in >> N;
    for(int i=1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            in >> graf[i][j];
        }
    }
    int x;
    cout << "Add meg a csomopontot ";
    cin >> x;
    cout << "Az osszekottetesek szama " << lehet(graf , x , N);
    return 0;
}
