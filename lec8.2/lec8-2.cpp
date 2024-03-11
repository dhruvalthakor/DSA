#include <iostream>
using namespace std;

int get_square(){
    int a=5;
    return a*a;
}

int get_cude(int b){
    return b*b*b;
}

int main()
{
cout<<"square:"<< get_square()<<endl;

cout<<"cube:"<< get_cude(4)<<endl;


    return 0;
}