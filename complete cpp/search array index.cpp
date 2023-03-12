#include<iostream>
#include<iomanip>
using namespace std;
int find(int[],int,int,int);
int main()
{
	int data[20]={12,77,99,19,67,6,14,9,8,10,99,31,40,97,99,16,21,55,19,50},x,y,INDEX,i,item;
	for(i=0;i<20;i++)
		cout<<"index ["<<setw(2)<<i<<"]  =  "<<data[i]<<endl;
	cout<<"Enter the index ranges between to search "<<endl;
	cin>>x>>y;
	cout<<"Enter the item to search : ";
	cin>>item;
	find(data,x,y,item);
	//cout<<"Item found at index ["<<INDEX<<"] "<<endl;
	return 0;
}
int find(int arr[],int m,int n,int item)
{
	int found[10],i,size=1,j=0;
	for(i=m;i<n;i++)
	{
		if(arr[i]==item)
		{
			
			//found=i;
			while(j<size)
			{
				found[j]=i;
				j=size;
				
			}
			size++;
			
		}
	}
	cout<<"Item found at index ";
	for(i=0;i<size-1;i++)
	{
		cout<<found[i];
		if(i!=size-2)
			cout<<",";
		else
			cout<<".";
	}
		
		
		
}
