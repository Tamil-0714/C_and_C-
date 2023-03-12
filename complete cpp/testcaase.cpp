#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int i;
    vector <char> a;
    cout<< "Enter the size of the array :";
    int n;
    cin>> n;
    cout<< "Enter "<<n<< " Elements : ";
    for(i=0;i<n;i++)
    {
        char k;
        cin>>k;
        a.push_back(k);
    }
    for(char i:a)
        cout<<i<< " ";
}
