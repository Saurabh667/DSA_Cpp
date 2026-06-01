#include<iostream>
using namespace std;

void spiral(int arr[3][3],int row,int col){
    int stRow=0;
    int stCol=0;
    int eRow=row-1;
    int eCol=col-1;
    int count=0;
    int total=row*col;
    while(count<total){
        for(int i=stRow;i<=eCol;i++){
            cout<< arr[stRow][i] <<" ";
            count++;
        }
        stRow++;
        for(int i=stRow;i<=eRow;i++){
            cout<< arr[i][eCol]<<" ";
            count++;
        }
        eCol--;
        for(int i=eCol;i<=stCol;i++){
            cout<< arr[eRow][i]<<" ";
            count++;
        }
        eRow--;
        for(int i=eRow;i<=stRow;i++){
            cout<< arr[i][stCol]<<" ";
            count++;
        }
        stCol++;
    }

};

int main(){
    // cout << "fghjkl";
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3;
    int col=3;
    spiral(arr,row,col);
}