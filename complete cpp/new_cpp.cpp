#include<iostream>
using namespace std;
int main()
{
    long long int i=1;
    while(1)
    {
        i++;
        if(i==1000000000*2*2*2)
            break;
    }
    cout<< i<<endl;
    return 0;
}
