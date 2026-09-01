#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cout << "Enter Matrix 1 size->\n";
    cin >> n >> m;
    cout << "Enter Matrix 2 size->\n";
    cin >> a >> b;
    cout << "Enter Matrix 1 value->\n";
    int mat1[n][m], mat2[a][b];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter Matrix 2 value->\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << " Matrix 1 - matrix 2 is ->\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat1[i][j] - mat2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
