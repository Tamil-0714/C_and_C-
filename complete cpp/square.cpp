#include<iostream>
using namespace std;
class math
{
private:
    int n,r;
    float n1,r1;
public:
    void input();
    void square();
    void display();
};
inline void math::input()
{
    cout<<"Enter an integer : ";
    cin>>n;
    cout<<"\nEnter a float no. : ";
    cin>>n1;
}
inline void math::square()
{
    r=n*n;
    r1=n1*n1;
}
inline void math::display()
{
    cout<<"\nSquare of integer [ "<<n<<" ] = "<<r<<"\n";
    cout<<"\nSquare of float [ "<<n1<<" ] = "<<r1<<"\n";
}
int main ()
{
    math n1;
    n1.input();
    n1.square();
    n1.display();
    return 0;
}
