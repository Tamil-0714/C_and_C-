#include<iostream>
using namespace std;
int a[20],n,i;
void put();
void display();
void bubble(int[],int);
int main()
{
    int option;
    place:
    cout<< "option"<<endl;
    cout<< "1. insert data\n2. show data\n3. short data\n4. search data\n0. exit"<<endl;
    cout<< "Enter options :";
    cin>>option;
    cout<<endl;
    while(option!=0)
    {
        switch(option)
        {
        case 1:
            put();
            goto place;
            break;
        case 2:
            display();
            goto place;
            break;
        case 3:
            bubble(a,n);
            cout<< "Shorted array "<<endl;
            for(i=0;i<n;i++)
                cout<<a[i]<< " ";
            cout<< "\n\n";
            goto place;
            break;
        }

    }

    return 0;
}
void put()
{

    cout<< "Enter the size of array : ";
    cin>>n;
    cout<<endl<< "Enter "<<n<< " elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<< "Data inserted sucesfull"<<endl<<endl;
}
void display()
{
    cout<< "Array of "<<n<< " elements"<<endl<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<endl<<endl;
}
void bubble(int arr[],int m)
{
    int k,l,tmp;
    for(k=0;k<m-1;k++)
    {
        for(l=0;l<m-k-1;k++)
            if(arr[l]>arr[l+1])
        {
            tmp=arr[l];
            arr[l]=arr[l+1];
            arr[l+1]=tmp;
        }
    }

}
