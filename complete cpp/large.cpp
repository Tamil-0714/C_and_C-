#include<iostream>
using namespace std;
class numc
{
private:
    int x,y,z;
public:
    void input()
    {
        cout<<endl<<"Enter 1st number : ";
        cin>>x;
        cout<<endl<<"Enter 2nd number : ";
        cin>>y;
        cout<<endl<<"Enter 3rd number : ";
        cin>>z;
    }
    void calc()
    {
        int r;
        r=( (x>y)&&(x>z)? x:(y>x)&&(y>z)? y:z );
        cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
    }
};
int main()
{
    numc j;
    j.input();
    j.calc();
    return 0;
}
