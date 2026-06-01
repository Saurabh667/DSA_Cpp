#include<iostream>
using namespace std;

void rotate(int arr[3][3]){
    int sRow=0;
    int eRow=2;
    int sCol=0;
    int eCol=2;
    while (sCol <= eCol){
        // for(int i=0;i<3;i++){
        //     // cout << arr[eCol][i];
        //     cout << arr[i][eCol];
        // }
        for(int i=2;i>=0;i--){
            // cout << arr[eCol][i];
            cout << arr[i][eCol];
        }
        
        eCol--;
        cout<< endl;
    }
};

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // simle arr
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }


    cout<< "this is 90 degree rotated array"<<endl;
    rotate(arr);
};