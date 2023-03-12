#include<iostream>
using namespace std;
class factorial
{
private:
    int n,f=1;
public:
    void input();
    void calc();
    void display();
};
void factorial::input()
{
    cout<<endl<<"Enter any number : ";
    cin>>n;
}
void factorial::calc()
{
    int i;
    if(n==0||n==1)
        f=n;
    else
    {
        for(i=1;i<=n;i++)
            f*=i;
    }

}
void factorial::display()
{
    cout<<"\nFactorial of "<<n<<" is : "<<f<<endl;
}
int main ()
{
    factorial f;
    f.input();
    f.calc();
    f.display();
    return 0;
}
