#include <iostream>
using namespace std
//class constructor
class Node
{
  public:
    int data;
    Node* prev;
    Node* next;
  //constructor
    Node (int x)
    {
      data =x;
      prev = NULL;
      next = NULL;
    }
};

Node* insertBeg(Node* head,int x)
{
  if (head == NULL)
  {
    Node* head = new Node(x);
    return head;
  }
  else
  {
    Node* temp=new Node(x);
    temp->next = head;
    head->prev = temp;
    temp = head;
    return temp;
  }
  return head;
}
Node* insertEnd(Node* head, int x)
{
  if (head == NULL)
  {
    Node* head = new Node(x);
    return head;
  }
  else
  {
    Node* trav=head;
    while (trav->next)
    {
      trav = trav->next;
    }
    Node* temp = new Node(x);
    temp->prev = trav;
    trav->next = temp;
  }
  return head;
}

Node* deleteBeg(Node* head)
{
  Node* temp = Node;
  if(head->next==NULL)
  {
    delete head;
  }
  else
  {
    head->next->prev = NULL;
    temp = head->next;
    head->next = NULL;
    delete head;
  }
  return temp;
}

Node* deleteEnd(Node* head)
{
  Node* temp = head;
  while(temp->next)
  {
    temp = temp->next;
  }
  temp->prev->next = NULL ;
  temp->prev = NULL;
  delete temp;
  return head;
}
Node* inBetweenDelete(Node* head,int key)
{
  Node* temp=head;
  while(temp->data==key)
  {
    temp = temp->next;
  }
  temp->next->prev = temp->prev;
  temp->prev->next = temp->next;
  return head;
}
int main{
  int N;
  cin << N;
  Node* head=NULL;
  while (N--)
  {
    cin << x;
    head = insbeg(head,x);
  }

}
