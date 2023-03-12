    #include<iostream>
    #define MAX 100
    void insert(int,int);
    void display();
    void delete_pos(int);
    void insert_n(int);
    void delete_all();
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
            cout<<"8. Append n number of data in end of list"<<endl;
            cout<<"9. Delete all data in list"<<endl;
            cout<<"Enter the Choise : ";
            cin>>ch;
            cout<<"\n\n";
            switch(ch)
            {
                case 0:
                    exit(0);


                case 1:
                    if(size==MAX)
                    {
                        cout<< "List is full \n\n";
                        break;
                    }
                    cout<<"Enter the data : ";
                    cin>>val;
                    a[size]=val;
                    size++;
                    cout<<"Data inserted succsfull"<<endl<<endl;
                    break;

                case 2:
                    if(size==MAX)
                    {
                        cout<< "List is full \n\n";
                        break;
                    }
                    cout<<"Enter the position : ";
                    cin>>pos;
                    cout<<"\nEnter the data to insert the postition : ";
                    cin>>val;
                    insert(val,pos);
                    break;

                case 3:
                    if(size==0)
                    {
                        cout<< "List is emty! \n\n";
                        break;
                    }
                    cout<<"Enter the position to delete the data : "	;
                    cin>>pos;
                    if(pos>=size)
                    {
                        cout<< "position is alredy emty! \n\n";
                        break;
                    }
                    delete_pos(pos);
                    break;
                case 4:
                    if(size==0)
                    {
                        cout<< "List is emty! \n\n";
                        break;
                    }
                    cout<<"data in last position is : "<<a[size-1]<<endl;
                    break;
                case 5:
                    if(size==0)
                    {
                        cout<< "List is emty! \n\n";
                        break;
                    }
                    cout<<"Enter the position to read data you want : ";
                    cin>>pos;
                    if(pos>size)
                    {
                        cout<< "The postition  is emty! \n\n";
                        break;
                    }
                    cout<<"Data in "<<pos<<"position is "<<a[pos]<<endl;
                    break;
                case 6:
                    if(size==0)
                    {
                        cout<< "List is emty! \n\n";
                        break;
                    }
                    cout<<"Enter the position to replace the data :";
                    cin>>pos;
                    if(pos>size)
                    {
                        cout<< "The postition  is emty! \n\n";
                        break;
                    }
                    cout<< "Enter the data to replace in positon "<<pos<<" : ";
                    cin>>val;
                    a[pos]=val;
                    cout<<"Data replaced sucessfull ...\n\n";
                    break;
                case 7:
                    if(size==0)
                    {
                        cout<< "List is emty! \n\n";
                        break;
                    }
                    display();
                    break;
                case 8:
                    cout<<"Note all data are append with end of the array"<<endl;
                    cout<<"Enter the size of data to enter : ";
                    cin>>n;
                    insert_n(n);
                    break;
                case 9:
                    if(size==0)
                    {
                        cout<< "List is aldredy emty\n\n";
                        break;
                    }
                    delete_all();
                    break;
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

        int i,p,q;
        p=size;
        q=n+(size-1);
        for(i=p;i<=q;i++)
        {
            cin>>a[i];
            size++;
        }
        cout<<"Data appended succesfull \n\n";
    }
    void delete_all()
    {

        int i;
        for(i=0;i<size;i++)
            a[i]=0;
        size=0;
        cout<< "All data in list are deletd \n"<<endl;
    }
