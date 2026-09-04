#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cout << "Enter Matrix 1 size->\n";
    cin >> n >> m;
    cout << "Enter Matrix 2 size->\n";
    cin >> a >> b;
    if (m == a)
    {
        cout << "Enter Matrix 1 value->\n";
        int mat1[n][m], mat2[a][b], ans[n][b];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b; j++)
            {
                ans[i][j] = 0;
            }
        }
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    ans[i][j] = ans[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        }
        cout << "Matrix 1 X matrix 2 is ->\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b; j++)
            {

                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Possible";
    }
    return 0;
}
