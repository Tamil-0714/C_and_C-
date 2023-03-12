
#include<iostream>
#define MAX 100
using namespace std;
class Stack
{
private:
    int a[MAX],len=0;
public:
    void push(int val)
    {
        if(len>=MAX)
        {
            cout<< "Stack overflow ...!"<<endl;
            return;
        }
        a[len++]=val;

    }
    void display()
    {

        if(len==0)
        {
            cout<< "Stack is empty...!"<<endl;
            return;
        }
        int i;
        cout<<"Data in Stack \n\n";
        for(i=0; i<len; i++)
            cout<<a[i]<<" ";
        cout<<"\n\n";
    }
    void pop()
    {
        if(len==0)
        {
            cout<< "Stack underflow....!"<<endl;
            return ;
        }
        cout<< "Poped element :"<<a[len-1]<<endl;
        a[len-1]=0;
        len--;
    }
    void peek()
    {
        cout<< "Top element in stack :"<<a[len-1]<<endl;
    }
};
int main()
{
    Stack a;
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.display();
    a.pop();
    a.pop();
    a.peek();
    a.display();
    return 0;
}
