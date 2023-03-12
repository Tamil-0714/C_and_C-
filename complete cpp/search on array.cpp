#include<iostream>
using namespace std;
int sech(int[],int,int);
int main()
{
	int a[100],n,position,data;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"The array of "<<n<<" numbers"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl<<"Enter the number to search"<<endl;
	cin>>data;
	position=sech(a,n,data);
	cout<<"position is : "<<position<<endl;
}
int sech(int arr[],int n,int item)
{
	int i,pos;
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
			pos=i+1;
			break;
		}
	}
	return pos;
}
