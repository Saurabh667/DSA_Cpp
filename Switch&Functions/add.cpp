#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "enter 1 number";
    cin>> a;
    cout << "enter 2 number";
    cin>> b;
    char op;
    cout << "enter the operation";
    cin>> op;
    switch (op)
    {
    case '+':
        // int ans=a+b;
        cout << a+b;
        break;
    case '-':
        
        cout << a-b;
        break;
    case '*':
        
        // int ans=a*b;
        cout << a*b;
        break;
    case '/':
        // int ans=a/b;
        cout << a/b;
        break;
    case '%':
        // int ans=a%b;
        cout << a%b;
        
        break;
    
    default:
        break;
    }
}