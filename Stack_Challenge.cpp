#include <iostream>
#include <stack>
using namespace std;

class MyStack
{
    stack<int> s1;
    stack<int> s2;

public:

    void push(int val);
    int pop();
    int top();
    int Size();
    bool isEmpty();
    int getMin();
};

void MyStack::push(int val)
{
    s1.push(val); // push the value in stack1
    if (s2.empty())
    {
        s2.push(val);//check the condition for stack 2 whether it is empty using the build in function, if yes then push the value. 
    }
    else if (s2.top() >= val)
    {
        s2.push(val);//otherwise check the condition, if the top for s2 greater than or equal to the value. if yes the push the value in stack 2
    }

}
int MyStack::pop()
{
    int top = s1.top();
    s1.pop();// pop out the value from stack 1 top
    
    if (top == s2.top())
    {
        s2.pop();
    }
    return top;//if top is equal to stack 2 top then pop it out from the stack 2 and return top
}

int MyStack::top()
{
    return s1.top();
}

int MyStack::Size()
{
    return s1.size();
}

bool MyStack::isEmpty()
{
    return s1.empty();
}

int MyStack::getMin()
{
    return s2.top();
}
int main()
{
    MyStack s;

    s.push(10);
    cout << "Current Minimum is  " << s.getMin() << endl;

    s.push(20);
    cout << "Current Minimum is  " << s.getMin() << endl;

    s.push(25);
    cout << "Current Minimum is  " << s.getMin() << endl;

    s.push(5);
    cout << "Current Minimum is  " << s.getMin() << endl;

    s.push(6);
    cout << "Current Minimum is  " << s.getMin() << endl;

    cout << "Popped out " << s.pop() << endl;
    cout << "Current Minimum is  " << s.getMin() << endl;

    s.push(23);
    cout << "Current Minimum is  " << s.getMin() << endl;

    cout << "Popped out " << s.pop() << endl;
    cout << "Current Minimum is  " << s.getMin() << endl;

    cout << "Popped out " << s.pop() << endl;
    cout << "Current Minimum is  " << s.getMin() << endl;

    return 0;
}