/*
pass by value 
new memory is allocated 
*/



// pass by reference
// int& n;


/*
to usse memory of heap we use 'new' keyword
USE OF HEAP MEMORY IS CALLED AS DYNAMIC MEMORY ALLOCATION
*/
/*
#include<iostream>
using namespace std;

// using dyanmic allocation
int getSum(int *arr,int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>> n;
    int* arr= new int[n];
    for(int i=0; i<n;i++){
        cin>> arr[i];
    }
    cout << getSum(arr,n);
}

*/

// Dynamic memory allocation for 2D array;

#include<iostream>
using namespace std;

int main(){
    cout <<"the the number of arrays you want";
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
       arr[i]=new int[n];
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> arr[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }
}