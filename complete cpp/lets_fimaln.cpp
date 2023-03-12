#include<iostream>
#define MAX 70000
void insert(int,int);
void display();
using namespace std;
long long int a[MAX],size=0;
int main()
{
    int i;
    for(i=40000-1;i>=0;i--)
    {
        insert(i,0);
    }
    //display();
    return 0;
}
void insert(int val,int pos)
{
    int i;
    for(i=size-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=val;
    size++;
    //cout<<"Data inserted succesfull /!\\"<<endl<<endl;
}
void display()
{
    int i;
    cout<<"Data in list \n\n";
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";

    cout<<"\n\n";
}

