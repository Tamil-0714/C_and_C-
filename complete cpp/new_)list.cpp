#include<iostream>
#include<cstring>
#include<iomanip>
#define MAX 100
using namespace std;
string product[100];
float prize[MAX];
int cnt=0,i;
class cart
{
public:
    void add_item(string name , float amount)
    {
        product[cnt]=name;
        prize[cnt]=amount;
        cnt++;
    }
    void display()
    {
        int total=0;
        cout<< "Item Name              Prize "<<endl<<endl;
        for(i=0;i<cnt;i++)
        {

            total+=prize[i];
            cout<<i+1 <<".";
            cout<<product[i]<<"\t\t\t"<<setw(3)<<prize[i]<<endl;

        }
        cout<< "Total\t\t\t"<<setw(3)<<total<<endl<<endl;
    }
    void delte_item(int pos)
    {
        pos=pos-1;
        for(i=pos-1;i<cnt-1;i++)
        {
            product[i]=product[i+1];
            prize[i]=prize[i+1];
        }
        cnt--;
    }


};
int main()
{
    cart c1;
    c1.add_item("sampo" ,50);
    c1.add_item("egg" ,5);
    c1.add_item("rice" ,70);
    c1.display();
    c1.delte_item(2);
    c1.display();
    cout<<endl;return 0;
}
