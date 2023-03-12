#include<iostream>
using namespace std;
int main()
{
    // 2.0 * 4.0 + 9.0 - 6.0 * 7.0 / 5.0 - 28.0;   , I split these expression into 4 variables;
    double a = 2.0*4.0;
    double b = 9.0;
    double c = (6.0*7.0)/5.0;
    double d = 28.0;
    double fnl=a+b-c-d;
    cout<< fnl <<endl;
    return 0;
}
