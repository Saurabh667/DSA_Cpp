#include<iostream>
using namespace std;

int main(){
    int total;
    cout << "Enter total amount";
    cin >> total;
    int hundred,fivfty,twenty,ten,one;
    
    switch (1)
    {
    case 1:
        hundred=total/100;
        total=total%100;
    case 2:
        fivfty=total/50;
        total=total%50;
    case 3:
        twenty=total/20;
        total=total%20;
    case 4:
        ten=total/10;
        total=total%10;
    case 5:
        one=total;
    
    default:
        break;
    }
    cout << " 100 rupe notes" << hundred;
    cout << endl;
    cout << " 50 rupe notes" << fivfty;
    cout << endl;
    cout << " 20 rupe notes" << twenty;
    cout << endl;
    cout << " 10 rupe notes" << ten;
    cout << endl;
    cout << " 1 rupe notes" << one;

}