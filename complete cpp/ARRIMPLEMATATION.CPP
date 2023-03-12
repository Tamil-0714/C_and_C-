#include<iostream>
#define MAX 100
void insert(int,int);
void display();
void delete_pos(int);
void insert_n(int);
using namespace std;
int a[MAX],size=0;
int main()
{
	int ch,val,pos,n;
	while(1)
	{
		cout<<"0. Exit"<<endl;
		cout<<"1. Insert data in last position"<<endl;
		cout<<"2. Insert data in certain positon"<<endl;
		cout<<"3. delete data in certain position"<<endl;
		cout<<"4. read data in last position"<<endl;
		cout<<"5. read data in certain positon"<<endl;
		cout<<"6. replace data in certain position"<<endl;
		cout<<"7. Display the list .... "<<endl;
		cout<<"8. Enter n number of elements"<<endl;
		cout<<"Enter the Choise : ";
		cin>>ch;
		cout<<"\n\n";
		switch(ch)
		{
			case 0: 
				exit(0);
	
			
			case 1:
				cout<<"Enter the data : ";
				cin>>val;
				a[size]=val;
				size++;
				cout<<"Data inserted succsfull"<<endl<<endl;
				break;
				
			case 2:
				cout<<"Enter the position : ";
				cin>>pos;
				cout<<"\nEnter the data to insert the postition : ";
				cin>>val;
				insert(val,pos);
				break;
			
			case 3:
				cout<<"Enter the position to delete the data : "	;
				cin>>pos;
				delete_pos(pos);
			case 7:
				display();
				
			case 8:
				cout<<"Note all data are append with end of the array"<<endl;
				cout<<"Enter the size of data to enter : ";
				cin>>n;
				insert_n(n);
				
			
			
		}
		
	}
}
void insert(int val,int pos)
{
	int i;
	for(i=size-1;i>=pos;i--)
		a[i+1]=a[i];
	a[pos]=val;
	size++;
	cout<<"Data inserted succesfull /!\\"<<endl<<endl;
}
void display()
{
	int i;
	cout<<"Data in list \n\n";
	for(i=0;i<size;i++)
		cout<<a[i]<<" ";
		
	cout<<"\n\n";
}
void delete_pos(int pos)
{
	int i;
	for(i=pos;i<size;i++)
		a[i]=a[i+1];
	size--;
	cout<<"Deleted succesfully"<<endl<<endl;
}
void insert_n(int n)
{
	int i;
	for(i=size;i<n+(size-1);i++)
		cin>>a[i];
	cout<<"Data appended succesfull \n\n";
}
