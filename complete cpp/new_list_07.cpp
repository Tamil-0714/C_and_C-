#include<iostream>
using namespace std;

class Linked_list
{
private:
    struct jnode
    {
        int data;
        struct jnode *next;
    };
    typedef struct jnode node;
    node *head=NULL;
    node *tail=NULL;
    // bool s;
    //node *lptr=NULL;
//    node *tmp;

public:
    int cnt=0;
    void insert_begi(int val)
    {
        node *new_node=new node;
        cnt++;
        new_node->data=val;
        if(head==NULL)
        {
            tail=new_node;
        }
        new_node->next=head;
        head=new_node;
    }
    void insert_pos(int pos, int val)
    {
        int i;
        node *tmp=head;
        if(pos>cnt)
        {

            return;
        }
        if(pos==cnt)
        {
            append(val);
            return;
        }
        if(pos==0)
        {
            insert_begi(val);
            return;
        }
        else
        {
            node *new_node=new node;
            cnt++;
            new_node->data=val;
            for(i=0; i<pos-1; i++)
                tmp=tmp->next;
            new_node->next=tmp->next;
            tmp->next=new_node;
        }


    }
    void append(int val)
    {
        node *new_node=new node;
        cnt++;
        new_node->data=val;
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            //tail=new_node;
        }
        else
        {
            tail->next=new_node;
            //tail=new_node;
        }
        tail=new_node;
    }
    void append(Linked_list list_l)
    {

        cnt+=list_l.cnt;
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
            cout<< tmp->data << " ";
            tmp=tmp->next;
        }
        cout<<endl;
    }

    void Short(Linked_list listl)
    {
        bool s=true;
        node *lptr=NULL;
        node *tmp;
        if(head==NULL)
            return;
        while(s)
        {
            s=false;
            tmp=head;
            while(tmp->next!=lptr)
            {
                if( (tmp->data)>(tmp->next->data))
                {
                    int c=tmp->data;
                    tmp->data=tmp->next->data;
                    tmp->next->data=c;
                    s=true;
                }
                tmp=tmp->next;
            }
            lptr=tmp;
        }
        cout<< "short called"<<endl;
    }

};
int main()
{

    Linked_list list1,list2,list3;

    list1.insert_begi(5);
    list1.insert_begi(4);
    list1.insert_begi(3);
    list1.insert_begi(2);
    list1.insert_begi(1);
    list1.append(6);
    list1.append(7);
    list1.display();
    list2.append(15);
    list2.append(16);
    list2.append(17);
    list2.append(18);
    list2.display();
    list2.append(list1);
    list2.display();
    list1.display();
    list2.append(77);
    list2.Short(list1);
    list2.display();
    list2.append(60);
    list1.display();
    return 0;
}

/*
output:


list 1 = 1 2 3 4 5 6 7
list 2 = 15 16 17 18
list 2 with list 1 = 15 16 17 18 1 2 3 4 5 6 7
again list 1 = 1 2 3 4 5 6 7
again list 1,3 = 1 2 3 4 5 6 7
list 2 with list 1 shortdet = 1 2 3 4 5 6 7 15 16 17 18
again list 1 = 5 6 7 15 16 17 18

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.


*/
    