#include <iostream>
using namespace std;

class List
{
  public:
    int data;
    List* next;
    List(){}
    List(int x)
    {
      data = x;
      next = NULL;
    }
};

class Stack
{
  private :
    List* top;
  public :
    Stack(){top = NULL;}
    bool push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

bool Stack::push(int x)
{
  if(top==NULL)
  {
    top = new List(x);
  }
  else
  {
    List* temp = new List(x);
    temp->next = top;
    top = temp;
  }
  return true;
}
bool Stack::isEmpty()
{
  if(top == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int Stack :: pop ()
{
  if(top==NULL)
  {
    cout << "Stack Underflow" << endl;
    return 0;
  }
  else
  {
    List* temp = top;
    top = top->next;
    delete temp;
  }
  return 1;
}

int Stack::peek()
{
  int x = top->data;
  return x;
}

int main ()
{
  Stack S = Stack() ;
  cout << S.isEmpty();
  S.push(5);
  S.push(6);
  S.push(7);
  S.push(8);
  cout << S.peek();
  S.pop();
  cout << S.peek();
}
