#include <iostream>
using namespace std;
int main()
{
      int num1=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<num1<<" " ;
            num1++;
        }
        cout<<endl;
    }


    
for(int i=1;i<=5;i++){
        for (int k = 5; k>i; k--)
        {
         cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
    
}