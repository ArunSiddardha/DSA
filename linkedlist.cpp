#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void ins_beg(Node *head, int x)
{
    Node *temp;
    temp = new Node(x);
    temp->next = head;
    head = temp;
}
void ins_end(Node *head, int x)
{
    Node *temp = head;

    if (head == NULL)
    {
        head = new Node(x);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(x);
    }
    cout << head->data;

    //cout << head-> data;
}
int main()
{
    int T, i, N, l;
    cin >> T;
    while (T--)
    {
        cin >> N;
        Node *head = NULL;
        for (i = 0; i < N; i++)
        {
            cin >> l;
            ins_end(head, l);
        }
    }
}
