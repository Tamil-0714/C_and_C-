#include<iostream>
#define MAX 100
void insert(int,int);
void display();
using namespace std;
int a[MAX],size=0;
int main()
{
    int ch,val,pos,n;
    while(1)
    {
        cin>>ch;
        switch(ch)
        {
            case 0:
                exit(0);
            case 2:
                cout<< "Enter the position:";
                cin>>pos;
                cout<< "Enter the value to inset the postion :";
                cin>>val;
                insert(val,pos);
                break;
            case 7:
                display();
                break;



        }
    }


    return 0;
}
void insert(int val,int pos)
{
    int i;
    for(i=size-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=val;
    size++;
    cout<<"Data inserted succesfull /!\\"<<endl<<endl;
}
void display()
{
    int i;
    cout<<"Data in list \n\n";
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";

    cout<<"\n\n";
}
