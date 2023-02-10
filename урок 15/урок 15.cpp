// урок 15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int  n, k;
    cin >> n;
  
        int a[10][10];

        for (int i = 0; i < n; i++)
        {
            for (int  j = 0; j < n; j++)
            {
                a[i][j] = 1 + rand() % 9;
                cout << a[i][j];
            }
            cout << "\n";
        }
        cin >> k;


        for (int r = 0; r < n; r++)
        {
            for (int l = 0; l < n; l++)
            {
                if (r - l - k == 0) cout << a[r][l] << "  ";
              
            }
        }

}

