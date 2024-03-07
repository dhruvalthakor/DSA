#include <iostream>
using namespace std;
int main()
{
int size ;
int pos,elem;
cout<<"enter array size :";
cin >>size;

int a[size];

cout <<"enter array elements:";
for (int i=0; i<size; i++){
    cout <<"enter a["<<i<<"]:";
    cin>>a[i];

}

cout<<endl<<endl<<"========"<<endl<<endl;

int choice;

do
{
cout<<"press 1 for insert an element"<<endl;
cout<<"press 2 for update an element"<<endl;
cout<<"press 3 for delete an element"<<endl;
cout<<"press 4 for view all element"<<endl;
cout<<"press 0 for exit"<<endl;

cout<<"enter your choice";
cin>> choice;


switch (choice)
{
case 1:
    cout<<"enter position: ";
    cin>> pos;

    cout<<"enter new element:";
    cin>>elem;

    for (int i=size-1; i>=pos; i--){
        a[i+1]=a[i];
    
    }
      size++;
    a[pos]=elem;

    cout<<"element insert  successfully";
    cout<<endl;
    break;

case 2:
cout <<"enter position :";
cin>> pos;

cout<<"enter new element:";
cin>> elem;

a[pos]=elem;

cout<<"element updeted successfully "<<endl;
break;

case 3:
cout <<"enter position :";
cin>> pos;

  for (int i=pos+1; i<size; i++){
        a[i-1]=a[i];
      
    }
  size--;

cout<<"element delete successfully "<<endl;
break;

case 4:

cout<<endl<<"array is :";
for (int i=0; i<size; i++){
    cout<<a[i]<<" ";
}

cout<<endl;
break;

case 0:
break;

default:
cout<<"enter valid choise......"<<endl;
break;
}

} while (choice!=0);


return 0;
}
