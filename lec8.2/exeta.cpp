#include <iostream>
using namespace std;


float Bill(float Cost) {
 
    float Amount =(Cost*18)/100;

    float totalam=Cost+Amount;

    return totalam;
}

int main() {
    float Cost;
    cout<<"Enter the original cost: ";
    cin >>Cost;

    float totalBill=Bill(Cost);

    cout << "Total bill: "<< totalBill << endl;

    return 0;
}
