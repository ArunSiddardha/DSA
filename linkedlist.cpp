#include <iostream>
using namespace std;
//creating the constructor
class Node
{
public:
    int data;
    Node *next;
    // Node(){}//empty constructor
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//insert in the beginning
void ins_beg(Node *head, int x)
{
    Node *temp;
    temp = new Node(x);
    temp->next = head;
    head = temp;
}
//insert in the end
Node* ins_end(Node *head, int x)//take the head here
{
    Node *temp = head; //store the head here in the temp

    if (head == NULL)
    {
        head = new Node(x);//update the head with the intial value then we can use that head
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next; //Go until the last node with temp
        }
        temp->next = new Node(x);//then create the node here
    }
return head;
}

void printlist(Node* head)
{
  Node* temp =head;
  while(temp->next !=NULL)
  {
    cout << temp->data<< " ";
    temp = temp->next;
    if(temp->next ==NULL){
      cout << temp->data;
    }
  }


}
Node* delete_node(Node* head,int key)//take the input head and the key
{
  Node* temp=head; // store the head in the temp
  Node* prev;//take a node pointer to store the prev value
  while(temp->data != key){
    prev=temp;
    temp = temp->next;
  }
    prev->next = temp->next;
    delete temp;
    return head;
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
        int key;
        cin>> key;
        delete_node(head,key);
        printlist(head);
    }
}
