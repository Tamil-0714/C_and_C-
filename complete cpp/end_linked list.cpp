#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head=NULL;
node *current=NULL;
void insert_end(int val)
{
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=val;
    if(head==NULL)
    {
        head=new_node;
        current=new_node;
    }
    current->next=new_node;
    current=new_node;
    new_node->next=NULL;
}
void insert_begi(int val)
{
    node *new_node=(node *)malloc(sizeof(node));
    new_node->data=val;
    if(head==NULL)
        new_node->next=NULL;
    else
        new_node->next=head;
    head=new_node;

}
void display()
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<< tmp->data << " ";
        tmp=tmp->next;
    }
}
void insert_pos(int pos , int val)
{
    node *new_node=(node *)malloc(sizeof(node));
    new_node->data=val;
    node * tmp;
    for(int i =0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    new_node->next=tmp->next;
    tmp->next=new_node;
}
int main()
{
    insert_end(5);
    insert_end(7);
    insert_end(9);
    insert_begi(3);
    insert_begi(1);
    insert_begi(5);
    insert_pos(3,4);
//    insert_pos()
    display();
    return 0;
}
