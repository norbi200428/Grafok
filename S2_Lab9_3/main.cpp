#include <iostream>
#include <fstream>

using namespace std;

int lehet(int graf[100][100], int x, int N)
{
    int counter = 0;
    for(int i = 1 ; i <= N ; i ++)
    {
        if(graf[x][i] == 1)
        {
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
    int tomb[100];
    int t[100];
    for(int i=1 ; i <= N ; i++)
    {
        tomb[i] = lehet(graf,i,N);
        t[i] = i;
    }
    for(int i = 1 ; i < N  ; i++ )
    {
        for(int j = i+1 ; j < N +1 ; j++)
        {
            if(tomb[i] > tomb[j])
            {
                swap(tomb[i], tomb[j]);
                swap(t[i],t[j]);
            }
        }
    }
    for(int i = 1 ; i <= N ; i++)
    {
        cout << t[i] << " ";
    }
    return 0;
}
