#include <iostream>
using namespace std;
#define MAX_SIZE 1000
class Stack
{
  private:
    int top;
    int stackArray[MAX_SIZE];
  public:
    Stack()
    {
      top = -1;
    };
    bool push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

bool Stack::push(int x)
{
  if(top >= MAX_SIZE-1)
  {
    cout << "Stack overFlow"<< endl;
    return false;
  }
  else
  {
    top = top +1;
    stackArray[top]=x;
    return true;
  }
}
int Stack:: pop()
{
  if(top ==-1)
  {
    cout << "Stack UnderFlow"<< endl;
    return 0;
  }
  else
  {
    int x=stackArray[top];
    top = top-1;
    return x;
  }
}
int Stack::peek()
{
  if(top==-1)
  {
    cout << "The stack is empty" << endl;
    return 0;
  }
  else
  {
    int x = stackArray[top];
    return x;
  }
}
bool Stack::isEmpty()
{
  if (top==-1)
  {
    return true;
  }
  return false;
}
int main()
{
  Stack s = Stack();
  s.push(3);
  s.push(5);
  s.push(7);
  while(!s.isEmpty())
  {
    cout <<s.peek();
    s.pop();
  };
}
