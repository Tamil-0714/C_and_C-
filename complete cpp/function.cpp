#include<iostream>
using namespace std;
void accen(int[],int);
int main()
{
	int a[100],n,i;
	cout<<"Enter the size of array "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	accen(a,n);
	for(i=0;i<n;i++)	
		cout<<a[i]<<" ";
	return 0;
	
}
void accen(int m[],int n)
{
	int i,j,tem;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(m[j]>m[j+1])
			{
				tem=m[j];
				m[j]=m[j+1];
				m[j+1]=tem;
			}
		}
	}

}
