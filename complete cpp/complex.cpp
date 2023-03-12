#include<iostream>
using namespace std;
class complex
{
public:
    int real,imag;
    void get()
    {
        cout<<"\nEnter Real Part :: ";
        cin>>real;
        cout<<"\nEnter imag Part :: ";
        cin>>imag;
    }
    void disp()
    {
        cout<<real<<"+"<<imag<<"i"<<"\n";
    }
    void sum(complex,complex);
};
void complex::sum(complex c1,complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter 1st complex no.: \n";
    c1.get();
    cout<<"\nEnter 2nd complex no.: \n";
    c2.get();
    c3.sum(c1,c2);
    cout<<"\nThe Sum of two complex number : ("<<c1.real<<" + "<<c1.imag<<"i" <<")+(" <<c2.real<<" + "<<c2.imag<<"i)  =  ";
    c3.disp();
    return 0;
}
