#include <iostream>
using namespace std;
int main()
{
    int size, target;
    cin >> size >> target;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    int low = 0;
    int high = size - 1;
    int mid1 = 0;
    int mid2 = 0;
    int flag = 0;
    while (low <= high)
    {
        mid1 = low + (high - low) / 3;
        mid2 = high - (high - low) / 3;
        
        if (ar[mid1] == target)
        {
            cout << "Found in index => " << mid1;
            flag = 1;
            break;
        }
        else if (ar[mid2] == target)
        {
            cout << "Found in index => " << mid2;
            flag = 1;
            break;
        }
        else if (target < ar[mid1])
        {
            high = mid1 - 1;
        }
        else if (target > ar[mid2])
        {
            low = mid2 + 1;
        }
        else if (target > ar[mid1] && target < ar[mid2])
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }
    if (flag == 0)
    {
        cout << "Target value not found!\n";
    }
    return 0;
}