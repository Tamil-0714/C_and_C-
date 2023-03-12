#include<iostream>
#include<cstdlib>
using namespace std;
void insert(int);
void display();
class node
{
    public:
        int data;
        node *nxt;
};
node *head=NULL;
int main()
{
    int i;
    for(i=40000000;i>=0;i--)
        insert(i);
    //display();
    return 0;
}
void insert(int val)
{
    node *new_node=(node *)malloc(sizeof(node));
    new_node->data=val;
    if(head==NULL)
    {
        new_node->nxt=NULL;

    }
    else
    {
        new_node->nxt=head;
    }
    head=new_node;
}
void display()
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<< tmp->data<< " ";
        tmp=tmp->nxt;
    }
}
