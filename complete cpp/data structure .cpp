#include<iostream>
#include<cstdlib>
using namespace std;
struct lnode
{
    int data;
    struct lnode *next;
};
typedef struct lnode node;
class Linked_list
{
private:
    node *head=NULL;
    node *tail=NULL;
public:
    void append(int val)
    {
        node* new_node=(node*)malloc(sizeof(node));
        new_node->data=val;
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
        }
        else
        {
            tail->next=new_node;
        }
        tail=new_node;
    }
    void L_append(Linked_list list_l)
    {
        if(head==NULL)
        {
            head=list_l.head;
            tail=list_l.tail;
        }
        else
        {
            tail->next=list_l.head;
            tail=list_l.tail;
        }
    }
    void display()
    {
        node *tmp=head;
        while(tmp!=NULL)
        {
            cout<< tmp->data<< " ";
            tmp=tmp->next;
        }
    }
};
int main()
{
    Linked_list list1,list2,l3;
    list1.append(10);
    list1.append(14);
    list1.append(19);
    cout<< "list 1 = ";
    list1.display();
    cout<<endl;
    list2.append(1);
    list2.append(2);
    list2.append(3);
    cout<< "list 2 = ";
    list2.display();
    cout<<endl;
    list2.L_append(list1);
    cout<< "list 1 Append with list 2 = ";
    list2.display();
    cout<<endl;
    l3.append(6);
    l3.append(7);
    l3.append(8);
    cout<< "list 3 = ";
    l3.display();
    cout<<endl;
    l3.L_append(list2);
    cout<< "list 2 Append with list 3 = ";
    l3.display();
    cout<<endl;
    return 0;
}
