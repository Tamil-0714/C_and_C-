#include<iostream>
#include<list>
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
    int cnt=0;

public:

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
    void append(int pos, int val)
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

        node *tmp=list_l.head;
        Linked_list  tmp_list;
        while(tmp!=NULL)
        {
            //cout<< tmp->data << " ";
            tmp_list.append(tmp->data);
            tmp=tmp->next;
        }


        cnt+=list_l.cnt;
        if(head==NULL)
        {
            head=tmp_list.head;
            tail=tmp_list.tail;
        }
        else
        {
            tail->next=tmp_list.head;
            tail=tmp_list.tail;
        }

    }
    void append(int pos, Linked_list list_l)
    {
        int i;
        node *tmp=list_l.head;
        Linked_list  tmp_list;
        while(tmp!=NULL)
        {
            tmp_list.append(tmp->data);
            tmp=tmp->next;
        }
        if(pos>cnt)
        {
            //cout<< "Memory filll"<<endl;
            //cnt+=list_l.cnt;
            return ;
        }
        if(pos==cnt)
        {
            append(tmp_list);
            //cnt+=list_l.cnt;
            return;
        }
        if(pos==0)
        {
            tmp_list.tail->next=head;
            head=tmp_list.head;
            cnt+=list_l.cnt;
            return;
        }
        else
        {
            node *tmp1=head;
            for(i=0; i<pos-1; i++)
                tmp1=tmp1->next;
            tmp_list.tail->next=tmp1->next;
            tmp1->next=tmp_list.head;
            cnt+=list_l.cnt;
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
    void Short()
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

    }
    void Short(string summa)
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
                if( (tmp->data)<(tmp->next->data))
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

    }
    void del_pos(int pos)
    {

        return;
    }
    void del_begi()
    {
        node *tmp=head;
        head=head->next;
        free(tmp);
        cnt--;
    }
    void del_end()
    {
        node *tmp=head;
        if(cnt==1)
        {
            free(head);
            cnt--;
            return;
        }
        while(tmp->next!=tail)
        {
            tmp=tmp->next;
        }
        tmp->next=NULL;
        node *cur=tail;
        tail=tmp;
        free(cur);
        cnt--;

    }
    void read_pos(int pos)
    {
        node *tmp=head;
        int i;
        for(i=0; i<pos; i++)
            tmp=tmp->next;
        cout<< "Data in position "<<pos<< " is "<<tmp->data<<endl;
    }
    void uptate_pos(int pos, int val)
    {
        node *tmp=head;
        int i;
        for(i=0; i<pos; i++)
            tmp=tmp->next;
        //cout<< "Data in position "<<pos<< " is "<<tmp->data<<endl;
        tmp->data=val;
        cout<< "Value uptated succesfulll !....."<<endl;
    }
    void Search(int val)
    {
        node *tmp=head;
        int idex = -1;
        bool s;
        while(tmp!=NULL)
        {
            idex++;
            if(tmp->data==val)
            {
                s=true;
                break;
            }
            else
                s=false;
            tmp=tmp->next;

        }
        if(s)
            cout<< "Value found at positon "<<idex<<endl;
        else
            cout<< "Value not found ....! )-:"<<endl;

    }
    void length()
    {
        cout<< "Length of the list = "<<cnt<<endl;
    }


};
int main()
{
    Linked_list l1,l2,l3;
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


<----------------------------------------------------------------------------------------------->
int n,i;
    cout<< "Enter size : ";
    cin>>n;
    cout<< "Enter "<<n<< " Elements"<<endl;
    for(i=0;i<n;i++)
    {
        int tp;
        cin>>tp;
        list1.append(tp);
    }
    cout<< "List 1 =  ";
    list1.display();
    cout<< "Enter "<<n<< " Elements for list 2"<<endl;
    for(i=0;i<n;i++)
    {
        int tp;
        cin>>tp;
        list2.append(tp);
    }
    cout<< "List 2 =  ";
    list2.display();
    list2.append(list1);
    cout<< "List 2 with list 1 =  ";
    list2.display();
    list2.Short();
    cout<< "List 2 with list 1 Shorted =  ";
    list2.display();
    cout<< "Again List 1 =  ";
    list1.display();


    list1.append(72);
    list1.append(19);
    list1.append(67);
    list1.append(77);
    list1.append(99);
    list1.display();
    list2.append(30);
    list2.append(31);
    list2.append(32);
    list1.length();
    list2.display();
    list2.length();
    list2.append(list1);
    list2.length();
    list2.display();


    <------------------------------------------------------------------------------------------------------------------------------->
    Linked_list list1,list2,list3,list4;
    list1.append(7);
    list1.append(8);
    list1.append(9);
    list1.append(10);
    list1.display();
    list2.append(1);
    list2.append(2);
    list2.append(3);
    list2.append(4);
    list2.append(5);
    list2.append(6);
    list2.append(11);
    list2.append(12);
    list2.append(13);
    list2.append(14);
    list2.display();
    list2.append(6,list1);
    list2.display();
    list3.append(-3);
    list3.append(-2);
    list3.append(-1);
    list3.append(0);
    list3.display();
    list2.append(0,list3);
    list2.display();
    list4.append(15);
    list4.append(16);
    list4.append(17);
    list4.append(18);
    list4.display();
    list2.append(18,list4);
    list2.display();
*/

