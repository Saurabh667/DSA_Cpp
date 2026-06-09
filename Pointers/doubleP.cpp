#include<iostream>
using namespace std;

int main(){
    cout<< "hjkl"<<endl;
    int a=5;
    int* ptr=&a;
    int** ptr2=&ptr;  //this is double pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<&a<<endl;

}