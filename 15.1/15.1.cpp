// 15.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int  n, m, mass;

    cin >> n;
    cin >> m;


    int a[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 1 + rand() % 9;
            cout << a[i][j];
        }
        cout << "\n";
    }
    
    cout << "\n";
    
    
    for (int k = 0; k < m; k++)
    {
        for (int v = 0; v < n; v++)
        {
            a[k][v] = a[v][k];
            cout << a[v][k];
        }
        cout << "\n";
    }
}

