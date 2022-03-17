#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int n = 8;

bool leall (int m[10][10])
{
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < n+1 ; j++)
        {
            if(m[i][j] > 0)
            {
                return false;
            }
        }
    }

    return true;
}

bool lehet(int jelenlegi, int kovetkezo, int m[10][10])
{

    if (m[jelenlegi][kovetkezo] == 0)
    {
        return false;
    }
    return true;
}

void kiir(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";

    }
    cout << endl;
}


void backtrack(int jelenlegi, vector<int> v, int m[10][10])
{

    if (leall(m))
    {
        kiir(v);
        return;
    }

    for(int kovetkezo = 1; kovetkezo<n+1; kovetkezo++)
    {

        if (kovetkezo!=jelenlegi)
        {

            if (lehet(jelenlegi, kovetkezo, m))
            {

                vector<int> tempv = v;
                tempv.push_back(kovetkezo);
                int tempm[10][10];
                for(int i=1 ; i <n+1; i++)
                {
                    for(int j=1; j<n+1; j++)
                    {
                        tempm[i][j] = m[i][j];
                    }
                }
                tempm[jelenlegi][kovetkezo] = 0;
                tempm[kovetkezo][jelenlegi] =0;

                backtrack(kovetkezo, tempv, tempm);
            }
        }
    }

}


int main()
{
    int m[10][10];
    ifstream in("input.txt");
    for(int i = 1 ; i < n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            in >> m[i][j];
        }
    }
    vector<int> v;
    for(int i = 1 ; i < n+1; i++)
    {
        backtrack( i, v,m);
    }


    return 0;
}
