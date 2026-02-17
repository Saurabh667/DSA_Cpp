#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (key > arr[mid])
        {
            start=mid+1;
            end=size-1;
        }
        else{
            start=0;
            end=mid-1;
        }
        mid=(start+end)/2;
        

    }
    return false;
}
int main(){
    int even[6]={1,5,6,8,9,71};
    int odd[5]={5,7,16,18,19};

    int check=binarySearch(even,6,1);
    cout << "the index of number is= " << check;
}