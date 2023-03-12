#include<iostream>
using namespace std;
class demo
{
	public:
		void square(int a)
		{
			a=a*a;
			cout<<a;
		}
};
main()
{
	demo math;
	int a=2;
	math.square(a);
}
