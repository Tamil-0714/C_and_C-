#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],sum[10],i;
    cout<< "Enter 5 elements"<<endl;
    for(i=0;i<5;i++)
        cin>>a[i];
    cout<< "Enter second 5 elements "<<endl;
    for(i=0;i<5;i++)
        cin>>b[i];
    for(i=0;i<5;i++)
        sum[i]=a[i]+b[i];
    cout<< "\n";
    for(i=0;i<5;i++)
        cout<<sum[i]<< " " ;
}
