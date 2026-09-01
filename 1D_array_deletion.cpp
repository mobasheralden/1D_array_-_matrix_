#include <iostream>
using namespace std;
int main()
{
    cout<<"Array size-> ";
    int n;                          // size->6
    cin >> n;                       // elements  ->10 20 30 40 50 60
    int ar[n];                      // pos-> 2
    cout<<"Elements-> ";            // new array ->10 30 40 50 60 size->5
    for (int i = 0; i < n; i++)     
    {
        cin >> ar[i];  
    }

    int pos;
    cout<<"POsition-> ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
