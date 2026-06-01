#include<iostream>
using namespace std;

int sumofRow(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sumofRow=0;
        for (int j=0;j<3;j++){
            sumofRow+=arr[i][j];
        }
        cout << sumofRow;
        cout << endl;
        sumofRow=0;
    }
};

int sumofCol(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sumofCol=0;
        for (int j=0;j<3;j++){
            sumofCol+=arr[j][i];
        }
        cout << sumofCol;
        cout << endl;
        // sumofCol=0;
    }
};



int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // cout << sumofRow(arr);
    sumofRow(arr);
    sumofCol(arr);
}