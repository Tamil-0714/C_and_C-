#include<iostream>
#define duplecate duplecate_remove
using namespace std;
int size;
void duplecate(int[]);
int main()
{
    int a[10],i;
    cout<< "Enter the size of array : ";
    cin>>size;
    cout<< "Enter "<<size<< " elements"<<endl;
    for(i=0;i<size;i++)
        cin>>a[i];
    duplecate_remove(a);
    cout<< "After removing duplicate elements"<<endl;
    for(i=0;i<size;i++)
        cout<<a[i]<< " ";
}
void duplecate(int arr[])
{
	int i,j,k;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<size;k++)
				{
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
}
