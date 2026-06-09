#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    int arr[10]={2,5,4};
    cout << "number is "<< num << endl;
    cout << "addres of nu s " << &num<<endl;
    cout << *p << endl;
    cout << "addres of array " << arr << endl;
    cout << "addres of array " << &arr[0] << endl;
    cout << "addres of array " << &arr[9] << endl;
    cout << "addres of array " << *arr << endl;
    cout << "addres of array " << *(arr+1) << endl;

}

// pointer stores the address
//  *p valuse aat aaddres p 