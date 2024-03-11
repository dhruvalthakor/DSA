#include <iostream>
using namespace std;

void shyam(){
    cout<<"i am shyam"<<endl;
}

void ram(){
    cout<<"i am ram"<<endl;
    shyam();
}


int main()
{

ram();

        return 0;
}