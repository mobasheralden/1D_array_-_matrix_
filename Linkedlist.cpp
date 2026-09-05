#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNode(int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    node *head, *cur;
    head = NULL;
    for (int i = 0; i < n; i++)
    {
        node *temp = createNode(arr[i]);
        if (head == NULL)
        {
            head = temp;
            cur = temp;
        }
        else
        {
            cur->next = temp;
            cur = cur->next;
        }
    }
    cur = head;
    while (cur != NULL)
    {
        cout << cur->data;
        cur = cur->next;
        if (cur != NULL)
        {
            cout << " -> ";
        }
    }
    return 0;
}
