#include <iostream>
using namespace std;
int main()
{
    int size;
    int target;
    cin >> size >> target;
    int flag = 0;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == target)
        {
            cout << "Target found in index -> " << i;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Taget value not found!";
    }

    return 0;
}