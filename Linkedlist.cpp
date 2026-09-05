#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNewnode(int val)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    node *head, *current;
    head = NULL;
    for (int i = 0; i < n; i++)
    {
        node *temp = createNewnode(ar[i]);
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    current = head;
    while (current != NULL)
    {
        cout << current->data;
        current = current->next;
        if (current != NULL)
        {
            cout << " -> ";
        }
    }
    return 0;
}
