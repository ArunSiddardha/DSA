#include <iostream>
using namespace std;
//creating the constructor
class Node
{
public:
    int data;
    Node *next;
    Node(){}//empty constructor
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//insert in the beginning
Node* endIns(Node *last, int x)
{
  if (last==NULL)
  {
    last = new Node(x);
    last->next = last;
  }
  else
  {
    Node* temp = new Node(x);
    temp->next = last;
    last->next = temp;
    last = temp;
  }
}
Node* inbetweenInsert(Node* last,int key,int x )
{
  Node* trav = last;
  Node* temp = new Node(x);
  while(trav->data = key)
  {
    trav= trav->next;
  }
  temp->next =trav->next;
  trav->next = temp;
  return last;
}
//remaining all are the same that we have done with the singly linked list
Node* begIns(Node *last, int x)
{
  if (last==NULL)
  {
    last = new Node(x);
    last->next = last;
  }
  else
  {
    Node* temp = new Node(x);
    temp->next = last;
    last->next = temp;
    last = temp;
  }

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
            head = ins_end(head, l);//pass the head
        }
        int pos;
        cin >> pos;
        delete_node_pos(head, pos);
        printlist(head);
        // int key;
        // cin >> key;
        // delete_node_key(head,key);
        // printlist(head);
    }
}
