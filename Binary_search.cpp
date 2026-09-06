#include <iostream>
using namespace std;
int main()
{
    cout << "Give your array size -> \n";
    int size, target;
    cin >> size;
    cout << "Give your target value -> \n";
    cin >> target;
    cout << "Give your array elements -> \n";
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    int low = 0;
    int high = size - 1;
    int mid = 0;
    int flag = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (target == ar[mid])
        {
            cout << "Target value found in index -> " << mid << endl;
            flag = 1;
            break;
        }
        else if (target < ar[mid])
        {

            high = mid - 1;
        }
        else if (target > ar[mid])
        {
            low = mid + 1;
        }
    }
    if (flag == 0)
    {
        cout << "Target value not found!\n";
    }

    return 0;
}