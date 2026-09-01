#include <iostream>
using namespace std;
int main()
{
    cout<<"Array size-> ";
    int n;
    cin >> n;
    cout<<"Elements-> ";
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout<<"POsition-> ";
    int pos;
    cin >> pos;
    cout<<"New Element-> ";
    int element;
    cin>>element;
    for (int i = n; i >= pos; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos-1] = element;
    for (int i = 0; i < n + 1; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
