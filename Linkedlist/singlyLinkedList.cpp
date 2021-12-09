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

    if(temp->next ==NULL)
    {
      cout << temp->data;
    }

  }


}
//deleting the xth position Node
Node* delete_node_pos(Node* head,int pos){
  Node* temp = head;
  Node* prev = new Node();
  pos = pos-1;
  while(pos--)
  {
    prev = temp;
    temp = temp->next;
  }

  prev->next = temp->next;
  delete temp;
  return head;

}

//deleting the node for the given key
Node* delete_node_key(Node* head,int key)//take the input head and the key
{
  Node* temp=head; // store the head in the temp
  Node* prev;//take a node pointer to store the prev value

  while(temp->data != key)
  {
    prev=temp;
    temp = temp->next;
  }

    prev->next = temp->next; // update the linked list
    delete temp; //free up the memory part
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
