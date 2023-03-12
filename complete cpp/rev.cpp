#include<iostream>
using namespace std;
class numc
{
private:
    int n,tmp,reverb=0,d;
public:
    void g_input();
    void r_numc();
    void display();
};
void numc::g_input()
{
    cout<<"\nEnter any positive no. :: ";
    cin>>n;
}
void numc::r_numc()
{
    tmp=n;
    while(n>0)
    {
        d=n%10;
        reverb=(reverb*10)+d;
        n/=10;
    }
}
void numc::display()
{
    cout<<"\nReverse of  "<<tmp<<"  is : "<<reverb<<"\n";
}
int main()
{
    numc r;
    r.g_input();
    r.r_numc();
    r.display();
    return 0;
}
