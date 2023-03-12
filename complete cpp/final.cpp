#include<iostream>
using namespace std;
int main()
{
    int i,j=0,index;
    float median;
    int a[10]= {1,2,6},b[10]= {3,4},c[100];
    int p,q,n;
    p=3;
    q=2;
    n=p+q;
    for(i=0; i<n; i++){
        if(a[i]!='\0')
        {
            c[i]=a[i];
            j++;
        }
        else if (b[i-j]!='\0')
        {
            c[i]=b[i-j];
        }
    }
    if((n%2)!=0){
        median=c[n/2];
        cout<< "medium = "<<median<<endl;
    }
    else{
        median=(c[n/2]+c[(n/2)-1])/2.0;
        cout<< "medium = "<<median<<endl;
    }

}
